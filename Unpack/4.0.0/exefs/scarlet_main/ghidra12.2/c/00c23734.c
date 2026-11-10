/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c23734; name: FUN_00c23734
 */


undefined8 FUN_00c23734(long *param_1,int param_2,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  plVar6 = param_1 + 1;
  plVar9 = (long *)*plVar6;
  if (plVar9 == (long *)0x0) {
    plVar9 = plVar6;
LAB_00c237bc:
    lVar5 = *plVar6;
    if (lVar5 == 0) {
      lVar5 = tpidr_el0;
      plVar4 = *(long **)(lVar5 + 0x30);
      if (plVar4 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar4 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x40,8);
      *(int *)(puVar2 + 4) = param_2;
      puVar8 = puVar2 + 5;
      *puVar8 = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[2] = plVar9;
      *puVar2 = 0;
      puVar2[1] = 0;
      *plVar6 = (long)puVar2;
      if (*(long *)*param_1 == 0) {
        puVar3 = puVar2;
      }
      else {
        *param_1 = *(long *)*param_1;
        puVar3 = (undefined8 *)*plVar6;
      }
      FUN_010108e0(param_1[1],puVar3);
      param_1[2] = param_1[2] + 1;
      puVar2[7] = param_4;
      *(undefined1 *)(puVar2 + 6) = param_3;
      *(undefined1 *)((long)puVar2 + 0x31) = 0;
      lVar7 = param_1[3];
      if (lVar7 == 0) {
        plVar6 = *(long **)(lVar5 + 0x30);
        if (plVar6 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar6 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        puVar2 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x18,8);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      else {
        puVar2 = (undefined8 *)FUN_00c0e238(lVar7,0,0x18);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        FUN_00c0e13c(lVar7,puVar2,PTR_LAB_047dabf0);
      }
      *puVar8 = puVar2;
    }
    else {
      puVar8 = (undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x38) = param_4;
    }
    *(byte *)((long)puVar8 + 10) = *(byte *)((long)puVar8 + 10) & 0xf0;
    return *puVar8;
  }
  plVar6 = param_1 + 1;
  do {
    if (param_2 < (int)plVar9[4]) {
      plVar4 = (long *)*plVar9;
      plVar6 = plVar9;
      if (plVar4 == (long *)0x0) {
        goto LAB_00c237bc;
      }
    }
    else {
      if (param_2 <= (int)plVar9[4]) goto LAB_00c237bc;
      plVar6 = plVar9 + 1;
      plVar4 = (long *)*plVar6;
      if (plVar4 == (long *)0x0) goto LAB_00c237bc;
    }
    plVar9 = plVar4;
  } while( true );
}


