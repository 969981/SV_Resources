/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351801c; name: FUN_0351801c
 */


void FUN_0351801c(long param_1,long param_2,int param_3,undefined4 param_4,uint param_5)

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
    local_54 = param_4;
    if (param_2 == 0) {
      do {
        plVar4 = (long *)plVar5[0xe];
        lVar3 = (**(code **)(*plVar5 + 0xd0))(plVar5);
        if ((lVar3 == param_1) &&
           (((param_3 == 0 || (*(int *)(plVar5[0xc] + 0x2c) == param_3)) &&
            (iVar2 = (**(code **)(*plVar5 + 0xf0))(plVar5,&local_54,param_5 & 1), iVar2 == 1)))) {
          FUN_034b3928(*(undefined8 *)puVar1,*(undefined4 *)(plVar5[0xc] + 0x2c));
        }
        plVar5 = plVar4;
      } while (plVar4 != (long *)0x0);
    }
    else {
      do {
        plVar4 = (long *)plVar5[0xe];
        lVar3 = (**(code **)(*plVar5 + 0xd0))(plVar5);
        if ((((lVar3 == param_1) && (*(long *)(plVar5[0xc] + 0x30) == param_2)) &&
            ((param_3 == 0 || (*(int *)(plVar5[0xc] + 0x2c) == param_3)))) &&
           (iVar2 = (**(code **)(*plVar5 + 0xf0))(plVar5,&local_54,param_5 & 1), iVar2 == 1)) {
          FUN_034b3928(*(undefined8 *)puVar1,*(undefined4 *)(plVar5[0xc] + 0x2c));
        }
        plVar5 = plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  return;
}


