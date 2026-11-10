/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014736d8; name: FUN_014736d8
 */


void FUN_014736d8(long *param_1,ulong param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  if ((param_2 & 1) != 0) {
    uVar1 = (**(code **)(*param_1 + 0x350))(param_1);
    *(undefined1 *)((long)param_1 + 0x40a) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x358))(param_1);
    *(undefined1 *)((long)param_1 + 0x40b) = uVar1;
    *(undefined4 *)(param_1 + 0x82) = 0;
    *(undefined1 *)((long)param_1 + 0x40c) = 0x12;
  }
  uVar1 = (**(code **)(*(long *)param_1[9] + 0x130))();
  *(undefined1 *)((long)param_1 + 0x40d) = uVar1;
  if ((param_3 & 1) != 0) {
    uVar2 = (**(code **)(*(long *)param_1[9] + 0x70))((long *)param_1[9],1);
    *(short *)(param_1 + 0x80) =
         (short)((ulong)((uVar2 & 0xffff) * (uint)*(byte *)((long)param_1 + 0x3f6)) / 10);
    uVar2 = (**(code **)(*(long *)param_1[9] + 0x70))((long *)param_1[9],2);
    *(short *)((long)param_1 + 0x402) =
         (short)((ulong)((uVar2 & 0xffff) * (uint)*(byte *)((long)param_1 + 0x3f7)) / 10);
    uVar2 = (**(code **)(*(long *)param_1[9] + 0x70))((long *)param_1[9],3);
    *(short *)((long)param_1 + 0x404) =
         (short)((ulong)((uVar2 & 0xffff) * (uint)*(byte *)(param_1 + 0x7f)) / 10);
    uVar2 = (**(code **)(*(long *)param_1[9] + 0x70))((long *)param_1[9],4);
    *(short *)((long)param_1 + 0x406) =
         (short)((ulong)((uVar2 & 0xffff) * (uint)*(byte *)((long)param_1 + 0x3f9)) / 10);
    uVar2 = (**(code **)(*(long *)param_1[9] + 0x70))((long *)param_1[9],5);
    *(short *)(param_1 + 0x81) =
         (short)((ulong)((uVar2 & 0xffff) * (uint)*(byte *)((long)param_1 + 0x3fa)) / 10);
  }
  return;
}


