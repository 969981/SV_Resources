/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00796f04; name: FUN_00796f04
 */


void FUN_00796f04(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if ((uint *)(param_2 + 0x30) == (uint *)0x0) {
    local_28[0] = 0x10407;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x30);
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    *(uint *)(param_2 + 8) = uVar1 >> 0x10 | uVar1 << 0x10;
    *(undefined1 *)(param_2 + 0xc) = *(undefined1 *)(param_2 + 0x34);
    *(ushort *)(param_2 + 0xe) = *(ushort *)(param_2 + 0x35) >> 8 | *(ushort *)(param_2 + 0x35) << 8
    ;
    *(ushort *)(param_2 + 0x10) =
         *(ushort *)(param_2 + 0x37) >> 8 | *(ushort *)(param_2 + 0x37) << 8;
    *(ushort *)(param_2 + 0x12) =
         *(ushort *)(param_2 + 0x39) >> 8 | *(ushort *)(param_2 + 0x39) << 8;
    *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(param_2 + 0x3b);
    *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_2 + 0x3c);
    *(undefined1 *)(param_2 + 0x16) = *(undefined1 *)(param_2 + 0x3d);
    *(undefined1 *)(param_2 + 0x17) = *(undefined1 *)(param_2 + 0x3e);
    *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_2 + 0x3f);
    *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(param_2 + 0x40);
    *(undefined1 *)(param_2 + 0x1a) = *(undefined1 *)(param_2 + 0x41);
    *(undefined1 *)(param_2 + 0x1b) = *(undefined1 *)(param_2 + 0x42);
    *(undefined1 *)(param_2 + 0x1c) = *(undefined1 *)(param_2 + 0x43);
    *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(param_2 + 0x44);
    *(undefined1 *)(param_2 + 0x1e) = *(undefined1 *)(param_2 + 0x45);
    *(undefined1 *)(param_2 + 0x1f) = *(undefined1 *)(param_2 + 0x46);
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_2 + 0x47);
    *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(param_2 + 0x48);
    *(undefined1 *)(param_2 + 0x22) = *(undefined1 *)(param_2 + 0x49);
    *(undefined1 *)(param_2 + 0x23) = *(undefined1 *)(param_2 + 0x4a);
    *(undefined1 *)(param_2 + 0x24) = *(undefined1 *)(param_2 + 0x4b);
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


