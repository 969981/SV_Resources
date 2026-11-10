/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c202f0; name: FUN_00c202f0
 */


undefined8 FUN_00c202f0(long *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = param_1 + 1;
  plVar8 = (long *)*plVar7;
  if (plVar8 == (long *)0x0) {
    plVar8 = plVar7;
LAB_00c20378:
    puVar6 = (undefined8 *)*plVar7;
    if (puVar6 == (undefined8 *)0x0) {
      lVar1 = tpidr_el0;
      plVar5 = *(long **)(lVar1 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar1 + 0x30) = DAT_04859430;
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x40,8);
      *(int *)(puVar6 + 4) = param_2;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = plVar8;
      *plVar7 = (long)puVar6;
      if (*(long *)*param_1 == 0) {
        puVar4 = puVar6;
      }
      else {
        *param_1 = *(long *)*param_1;
        puVar4 = (undefined8 *)*plVar7;
      }
      FUN_010108e0(param_1[1],puVar4);
      uVar3 = 1;
      param_1[2] = param_1[2] + 1;
    }
    else {
      uVar3 = 0;
    }
    *param_4 = puVar6 + 5;
    puVar6[7] = param_3;
    return uVar3;
  }
  plVar7 = param_1 + 1;
  do {
    if (param_2 < (int)plVar8[4]) {
      plVar5 = (long *)*plVar8;
      plVar7 = plVar8;
      if (plVar5 == (long *)0x0) {
        goto LAB_00c20378;
      }
    }
    else {
      if (param_2 <= (int)plVar8[4]) goto LAB_00c20378;
      plVar7 = plVar8 + 1;
      plVar5 = (long *)*plVar7;
      if (plVar5 == (long *)0x0) goto LAB_00c20378;
    }
    plVar8 = plVar5;
  } while( true );
}


