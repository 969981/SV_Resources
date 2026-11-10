/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0037a7b0; name: FUN_0037a7b0
 */


ulong FUN_0037a7b0(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  uint local_24;
  
  puVar1 = PTR_DAT_047ccae0;
  if (*(ulong *)(*(long *)PTR_DAT_047ccae0 + 0x1e8) == param_1) {
    uVar3 = 0;
  }
  else {
    uVar5 = param_1 & 0xfffffffffffffffc;
    plVar6 = (long *)(uVar5 + 0x20);
    if (*plVar6 ==
        *(long *)((*(ulong *)(*(long *)PTR_DAT_047ccae0 + 0x1e8) & 0xfffffffffffffffc) + 0x20)) {
      return 0;
    }
    uVar3 = FUN_00368130(plVar6);
    if ((int)uVar3 != 0) {
      uVar3 = *(ulong *)(*(long *)puVar1 + 0x1f0);
      if (uVar3 != param_1) {
        if ((*plVar6 != *(long *)((uVar3 & 0xfffffffffffffffc) + 0x20)) &&
           (iVar2 = FUN_00368130(plVar6), iVar2 != 0)) {
          uVar3 = *(ulong *)(*(long *)puVar1 + 0x1f8);
          if (uVar3 != param_1) {
            if ((*plVar6 != *(long *)((uVar3 & 0xfffffffffffffffc) + 0x20)) &&
               (iVar2 = FUN_00368130(plVar6), iVar2 != 0)) {
              lVar4 = FUN_00376bf0(param_1,&LAB_0037a930);
              if (lVar4 != 0) {
                return (ulong)((int)lVar4 - 1);
              }
              uStack_48 = *(undefined8 *)(uVar5 + 0x28);
              local_50 = *plVar6;
              uStack_38 = *(undefined8 *)(uVar5 + 0x38);
              uStack_40 = *(undefined8 *)(uVar5 + 0x30);
              uVar5 = FUN_0036a5a0(&local_50,&local_24);
              if ((uVar5 & 1) == 0) {
                iVar2 = 3;
                local_24 = 2;
              }
              else {
                iVar2 = local_24 + 1;
              }
              FUN_00376c90(param_1,&LAB_0037a930,iVar2);
              return (ulong)local_24;
            }
          }
          return 2;
        }
      }
      return 1;
    }
  }
  return uVar3;
}


