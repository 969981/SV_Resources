/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019af200; name: FUN_019af200
 */


void FUN_019af200(void)

{
  undefined4 local_78;
  undefined2 local_74;
  long local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (DAT_0485ebe8 != (long *)0x0 && DAT_0485ebf8 == 0) {
    DAT_0485ebf8 = (**(code **)(*DAT_0485ebe8 + 0x10))(DAT_0485ebe8,DAT_0485ebf0,DAT_0485ebf4);
    uStack_68 = (ulong)DAT_0485ebf0;
    local_78 = 8;
    local_60 = 0x20000;
    uStack_58 = 0x8000;
    local_74 = 0;
    local_50 = 0x10000;
    uStack_48 = 0x30000;
    local_40 = 0x30000;
    uStack_38 = 0x2400;
    local_30 = 0xa500;
    uStack_28 = 0xe00000004;
    local_70 = DAT_0485ebf8;
    nn::socket::Initialize((Config *)&local_78);
  }
  return;
}


