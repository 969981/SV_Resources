/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00796dd4; name: FUN_00796dd4
 */


void FUN_00796dd4(undefined8 param_1,long param_2,uint *param_3,undefined4 *param_4,uint param_5)

{
  uint uVar1;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (((param_3 == (uint *)0x0) || (param_4 == (undefined4 *)0x0)) || (param_5 < 0x1c)) {
    local_28[0] = 0x10407;
  }
  else {
    uVar1 = (*(uint *)(param_2 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 8) & 0xff00ff) << 8;
    *param_3 = uVar1 >> 0x10 | uVar1 << 0x10;
    *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_2 + 0xc);
    *(ushort *)((long)param_3 + 5) =
         *(ushort *)(param_2 + 0xe) >> 8 | *(ushort *)(param_2 + 0xe) << 8;
    *(ushort *)((long)param_3 + 7) =
         *(ushort *)(param_2 + 0x10) >> 8 | *(ushort *)(param_2 + 0x10) << 8;
    *(ushort *)((long)param_3 + 9) =
         *(ushort *)(param_2 + 0x12) >> 8 | *(ushort *)(param_2 + 0x12) << 8;
    *(undefined1 *)((long)param_3 + 0xb) = *(undefined1 *)(param_2 + 0x14);
    *(undefined1 *)(param_3 + 3) = *(undefined1 *)(param_2 + 0x15);
    *(undefined1 *)((long)param_3 + 0xd) = *(undefined1 *)(param_2 + 0x16);
    *(undefined1 *)((long)param_3 + 0xe) = *(undefined1 *)(param_2 + 0x17);
    *(undefined1 *)((long)param_3 + 0xf) = *(undefined1 *)(param_2 + 0x18);
    *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_2 + 0x19);
    *(undefined1 *)((long)param_3 + 0x11) = *(undefined1 *)(param_2 + 0x1a);
    *(undefined1 *)((long)param_3 + 0x12) = *(undefined1 *)(param_2 + 0x1b);
    *(undefined1 *)((long)param_3 + 0x13) = *(undefined1 *)(param_2 + 0x1c);
    *(undefined1 *)(param_3 + 5) = *(undefined1 *)(param_2 + 0x1d);
    *(undefined1 *)((long)param_3 + 0x15) = *(undefined1 *)(param_2 + 0x1e);
    *(undefined1 *)((long)param_3 + 0x16) = *(undefined1 *)(param_2 + 0x1f);
    *(undefined1 *)((long)param_3 + 0x17) = *(undefined1 *)(param_2 + 0x20);
    *(undefined1 *)(param_3 + 6) = *(undefined1 *)(param_2 + 0x21);
    *(undefined1 *)((long)param_3 + 0x19) = *(undefined1 *)(param_2 + 0x22);
    *(undefined1 *)((long)param_3 + 0x1a) = *(undefined1 *)(param_2 + 0x23);
    *(undefined1 *)((long)param_3 + 0x1b) = *(undefined1 *)(param_2 + 0x24);
    *param_4 = 0x1c;
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


