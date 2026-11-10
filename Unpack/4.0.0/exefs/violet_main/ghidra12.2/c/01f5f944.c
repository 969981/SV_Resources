/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f5f944; name: FUN_01f5f944
 */


void FUN_01f5f944(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  
  puVar2 = PTR_DAT_047d0a08;
  if (*(long *)PTR_DAT_047d0a08 != 0) {
    iVar3 = FUN_00f21480();
    puVar1 = PTR_DAT_047d0860;
    if (((iVar3 == 1) && (*(long *)PTR_DAT_047d0860 != 0)) &&
       (plVar4 = (long *)FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,DAT_0485ea48,0x81),
       plVar4 != (long *)0x0)) {
      (**(code **)(*plVar4 + 0x80))(plVar4,param_1);
    }
    if (*(long *)puVar2 != 0) {
      iVar3 = FUN_00f21480();
      if (((iVar3 == 1) && (*(long *)puVar1 != 0)) &&
         (plVar4 = (long *)FUN_00f21488(*(long *)puVar1 + 0x10,DAT_0485ea4c,0x81),
         plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 0x80))(plVar4,param_1);
      }
      if (*(long *)puVar2 != 0) {
        iVar3 = FUN_00f21480();
        if (((iVar3 == 1) && (*(long *)puVar1 != 0)) &&
           (plVar4 = (long *)FUN_00f21488(*(long *)puVar1 + 0x10,DAT_0485ea50,0x81),
           plVar4 != (long *)0x0)) {
          (**(code **)(*plVar4 + 0x80))(plVar4,param_1);
        }
        if (*(long *)puVar2 != 0) {
          iVar3 = FUN_00f21480();
          if (((iVar3 == 1) && (*(long *)puVar1 != 0)) &&
             (plVar4 = (long *)FUN_00f21488(*(long *)puVar1 + 0x10,DAT_0485ea54,0x81),
             plVar4 != (long *)0x0)) {
            (**(code **)(*plVar4 + 0x80))(plVar4,param_1);
          }
          if (*(long *)puVar2 != 0) {
            iVar3 = FUN_00f21480();
            if (((iVar3 == 1) && (*(long *)puVar1 != 0)) &&
               (plVar4 = (long *)FUN_00f21488(*(long *)puVar1 + 0x10,DAT_0485ea58,0x81),
               plVar4 != (long *)0x0)) {
              (**(code **)(*plVar4 + 0x80))(plVar4,param_1);
            }
            if (*(long *)puVar2 != 0) {
              iVar3 = FUN_00f21480();
              if (((iVar3 == 1) && (*(long *)puVar1 != 0)) &&
                 (plVar4 = (long *)FUN_00f21488(*(long *)puVar1 + 0x10,DAT_0485ea5c,0x81),
                 plVar4 != (long *)0x0)) {
                (**(code **)(*plVar4 + 0x80))(plVar4,param_1);
              }
              if (*(long *)puVar2 != 0) {
                iVar3 = FUN_00f21480();
                if (((iVar3 == 1) && (*(long *)puVar1 != 0)) &&
                   (plVar4 = (long *)FUN_00f21488(*(long *)puVar1 + 0x10,DAT_0485ea60,0x81),
                   plVar4 != (long *)0x0)) {
                  (**(code **)(*plVar4 + 0x80))(plVar4,param_1);
                }
                if (((*(long *)puVar2 != 0) && (iVar3 = FUN_00f21480(), iVar3 == 1)) &&
                   ((*(long *)puVar1 != 0 &&
                    (plVar4 = (long *)FUN_00f21488(*(long *)puVar1 + 0x10,DAT_0485ea64,0x81),
                    plVar4 != (long *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x01f5fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*plVar4 + 0x80))(plVar4,param_1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


