/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a1a0c; name: FUN_007a1a0c
 */


void FUN_007a1a0c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int *piVar2;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar2 = local_50;
  FUN_007a0058(local_40,param_2,*(undefined8 *)(param_2 + 0x168));
  if (local_40[0] == 0) {
    uVar1 = FUN_00796784(param_2 + 0xb8);
    if ((uVar1 & 1) != 0) {
      uVar1 = FUN_00796784(param_2 + 0x98);
      if (((uVar1 & 1) != 0) &&
         (uVar1 = FUN_007967e8(param_2 + 0x98,param_2 + 0xb8), (uVar1 & 1) != 0)) {
        if ((*(int *)(param_2 + 0x1148) != 0) && (*(int *)(param_2 + 0x1118) != 1)) {
          FUN_0078cac8(param_2 + 0x1118);
          *(undefined4 *)(param_2 + 0x1148) = 0;
        }
        FUN_007a58e0(local_50,*(undefined8 *)(param_2 + 0x168),param_2 + 0x1118);
        FUN_018ff39c(local_40,local_50);
        if (local_40[0] == 0) {
          *(undefined4 *)(param_2 + 0x1148) = 0xc;
          FUN_0078cd58(*(undefined8 *)(param_2 + 0x168),0);
        }
        goto LAB_007a1a38;
      }
    }
    local_50[0] = 0x10408;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  }
  else {
LAB_007a1a38:
    piVar2 = local_40;
  }
  FUN_00cbd7c0(param_1,piVar2);
  return;
}


