/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008151a4; name: FUN_008151a4
 */


void FUN_008151a4(long *param_1,char *param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 local_30;
  undefined4 local_28;
  
  plVar2 = (long *)FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(param_2 + 8));
  lVar4 = FUN_007ec4a8(param_1);
  if (lVar4 == *(long *)(lVar3 + 0x30)) {
    if (*param_2 == '\x01') {
      *(undefined1 *)(param_1 + 0x10d) = 0;
      return;
    }
    if (*param_2 == '\0') {
      *(undefined1 *)(param_1 + 0x10d) = 1;
    }
  }
  else {
    cVar1 = FUN_007ec4f0(param_1);
    if (cVar1 != -3) {
      cVar1 = *param_2;
      if ((cVar1 != '\0') && (cVar1 != '\x02')) {
        if (cVar1 == '\x01') {
          FUN_008152b8(param_1,*(undefined8 *)(lVar3 + 0x30));
        }
        else {
          local_28 = 0;
          local_30 = 0x1000;
          (**(code **)(*param_1 + 0x10))(param_1,&local_30);
        }
      }
      local_28 = 0;
      local_30 = 0x1000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_30);
      return;
    }
  }
  return;
}


