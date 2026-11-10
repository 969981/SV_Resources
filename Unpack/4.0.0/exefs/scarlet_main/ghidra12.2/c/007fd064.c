/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fd064; name: FUN_007fd064
 */


void FUN_007fd064(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(param_2 + 0x770) == 0)) {
    local_38[0] = 0x10408;
  }
  else {
    uVar2 = FUN_0078a324(param_3 + 0x298);
    if ((((uVar2 & 1) == 0) && (uVar2 = FUN_0078a324(param_3 + 0x2b8), (uVar2 & 1) == 0)) ||
       (*(int *)(param_3 + 8) == 0)) {
      local_38[0] = 0x10407;
    }
    else {
      memset(local_38,0,0x10);
      iVar1 = memcmp((void *)(param_3 + 0xc),local_38,0x10);
      if (iVar1 == 0) {
        local_48[0] = 0x10407;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
        puVar5 = local_48;
        goto LAB_007fd160;
      }
      lVar3 = FUN_0078bb34();
      if ((lVar3 != 0) && (lVar3 = FUN_0078bb34(), *(char *)(lVar3 + 0x5a9) == '\0')) {
        uVar4 = FUN_0078bb34();
        FUN_0078bb44(local_38,uVar4,0);
      }
      FUN_007ec4c8(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x770));
      lVar3 = FUN_007f72c8(*(undefined8 *)PTR_DAT_047d0860);
      *(undefined1 *)(lVar3 + 0xf4) = *(undefined1 *)(*(long *)PTR_DAT_047d0a08 + 0x471);
      local_38[0] = 0;
    }
  }
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  puVar5 = local_38;
LAB_007fd160:
  FUN_00cbd7c0(param_1,puVar5);
  return;
}


