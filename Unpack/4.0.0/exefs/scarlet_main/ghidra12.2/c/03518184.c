/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03518184; name: FUN_03518184
 */


void FUN_03518184(undefined4 param_1,long param_2,long param_3,int param_4,uint param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined4 local_54;
  
  puVar1 = PTR_DAT_047e6f38;
  if (DAT_048d2010 != (long *)0x0) {
    plVar5 = DAT_048d2010;
    local_54 = param_1;
    if (param_3 == 0) {
      do {
        plVar4 = (long *)plVar5[0xe];
        lVar3 = (**(code **)(*plVar5 + 0xd0))(plVar5);
        if ((lVar3 == param_2) &&
           (((param_4 == 0 || (*(int *)(plVar5[0xc] + 0x2c) == param_4)) &&
            (iVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5,&local_54,param_5 & 1), iVar2 == 1)))) {
          FUN_034b3928(*(undefined8 *)puVar1,*(undefined4 *)(plVar5[0xc] + 0x2c));
        }
        plVar5 = plVar4;
      } while (plVar4 != (long *)0x0);
    }
    else {
      do {
        plVar4 = (long *)plVar5[0xe];
        lVar3 = (**(code **)(*plVar5 + 0xd0))(plVar5);
        if ((((lVar3 == param_2) && (*(long *)(plVar5[0xc] + 0x30) == param_3)) &&
            ((param_4 == 0 || (*(int *)(plVar5[0xc] + 0x2c) == param_4)))) &&
           (iVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5,&local_54,param_5 & 1), iVar2 == 1)) {
          FUN_034b3928(*(undefined8 *)puVar1,*(undefined4 *)(plVar5[0xc] + 0x2c));
        }
        plVar5 = plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  return;
}


