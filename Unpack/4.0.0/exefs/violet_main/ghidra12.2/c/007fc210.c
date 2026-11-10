/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fc210; name: FUN_007fc210
 */


void FUN_007fc210(undefined8 param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  local_38[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  if (((DAT_047fb470 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047fb470), iVar1 != 0)) {
    DAT_047fb478._0_2_ = 0;
    DAT_047fb478._2_2_ = 0;
    DAT_047fb47c = 0xffff;
    DAT_047fb480 = 0;
    __cxa_guard_release(&DAT_047fb470);
  }
  DAT_047fb478._2_2_ = 0xc000;
  DAT_047fb47c = 0xffff;
  DAT_047fb480 = *(undefined8 *)(param_2 + 0xc88);
  FUN_00810070(local_48,*(undefined8 *)(param_2 + 0x20));
  FUN_018ff39c(local_38,local_48);
  if (local_38[0] == 0) {
    local_48[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    piVar2 = local_48;
  }
  else {
    piVar2 = local_38;
  }
  FUN_00cbd7c0(param_1,piVar2);
  return;
}


