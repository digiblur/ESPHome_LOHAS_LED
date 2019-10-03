//using namespace esphomelib::output;

class CopyOutput : public FloatOutput {
 public:
  FloatOutput *channel_a;
  FloatOutput *channel_b;
  FloatOutput *channel_c;

  void write_state (float state) override {
    channel_a->set_level (state);
    channel_b->set_level (state);
    channel_c->set_level (state);
  }
};