/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cba650; name: FUN_00cba650
 */


ulong FUN_00cba650(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 local_38;
  
  uVar3 = FUN_00cba750();
  if (*param_4 < *param_3) {
    uVar1 = *param_3;
    uVar5 = param_3[1];
    uVar4 = *param_4;
    *(char *)(param_3 + 1) = (char)param_4[1];
    *param_3 = uVar4;
    local_38 = (undefined1)uVar5;
    *(undefined1 *)(param_4 + 1) = local_38;
    *param_4 = uVar1;
    iVar2 = (int)uVar3;
    if (*param_3 < *param_2) {
      uVar3 = *param_2;
      uVar1 = param_2[1];
      uVar5 = *param_3;
      *(char *)(param_2 + 1) = (char)param_3[1];
      *param_2 = uVar5;
      local_38 = (undefined1)uVar1;
      *(undefined1 *)(param_3 + 1) = local_38;
      *param_3 = uVar3;
      if (*param_2 < *param_1) {
        uVar1 = *param_1;
        uVar5 = param_1[1];
        uVar3 = (ulong)(iVar2 + 3);
        uVar4 = *param_2;
        *(char *)(param_1 + 1) = (char)param_2[1];
        *param_1 = uVar4;
        local_38 = (undefined1)uVar5;
        *(undefined1 *)(param_2 + 1) = local_38;
        *param_2 = uVar1;
      }
      else {
        uVar3 = (ulong)(iVar2 + 2);
      }
    }
    else {
      uVar3 = (ulong)(iVar2 + 1);
    }
  }
  return uVar3;
}


