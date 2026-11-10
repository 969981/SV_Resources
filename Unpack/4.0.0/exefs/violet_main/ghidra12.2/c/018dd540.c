/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018dd540; name: FUN_018dd540
 */


void FUN_018dd540(long *param_1,byte *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_30 [4];
  undefined4 local_20 [4];
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (long)(PTR_DAT_047d0990 + 0x10);
  param_1[1] = (long)param_2;
  *(undefined4 *)(param_1 + 3) = 1;
  uVar2 = (ulong)*param_2;
  if (*param_2 != 0) {
    uVar2 = 0;
    do {
      lVar1 = uVar2 + 1;
      uVar2 = uVar2 + 1;
    } while (param_2[lVar1] != 0);
  }
  *(int *)((long)param_1 + 0x14) = (int)uVar2;
  local_20[0] = 0;
  local_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_20 | 4),(Result *)local_30);
  FUN_00cbd7c0(local_30,local_20);
  return;
}


