/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351389c; name: ~SystemEvent
 */


/* nn::os::SystemEvent::~SystemEvent() */

void __thiscall nn::os::SystemEvent::~SystemEvent(SystemEvent *this)

{
  if (this[0x28] == (SystemEvent)0x0) {
    return;
  }
  nn::os::DestroySystemEvent((SystemEventType *)this);
  return;
}


