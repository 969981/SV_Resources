/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0154b2c8; name: FUN_0154b2c8
 */


void FUN_0154b2c8(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long local_50;
  undefined2 local_48;
  
  lVar4 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),*param_2);
  if (lVar4 != 0) {
    plVar5 = (long *)(*(code *)**(undefined8 **)(lVar4 + 0x28))((undefined8 *)(lVar4 + 0x28));
    puVar1 = PTR_DAT_047d3f00;
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar3 != 0)) {
      uVar8 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar8;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; puVar2 = PTR_DAT_047d3f08, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)PTR_DAT_047d3f08) {
        if ((param_2[1] == 0) || (param_2[2] == 0)) {
          FUN_0154b460(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),lVar4,0);
          return;
        }
        lVar6 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30));
        if (lVar6 == 0) {
          return;
        }
        puVar7 = (undefined8 *)
                 (*(code *)**(undefined8 **)(lVar6 + 0x28))((undefined8 *)(lVar6 + 0x28));
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar3 != 0)) {
          uVar8 = FUN_01b07aa4();
          *(undefined8 *)puVar2 = uVar8;
          __cxa_guard_release(PTR_DAT_047d3f00);
        }
        while( true ) {
          if (puVar7 == (undefined8 *)0x0) {
            return;
          }
          if (puVar7 == (undefined8 *)puVar2) break;
          puVar7 = (undefined8 *)*puVar7;
        }
        local_48 = (undefined2)param_2[2];
        local_50 = lVar6;
        FUN_0154b460(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),lVar4,&local_50
                    );
        return;
      }
    }
  }
  return;
}


