/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c21ef8; name: FUN_00c21ef8
 */


void FUN_00c21ef8(undefined8 param_1,long *param_2,int param_3,undefined1 param_4,undefined8 param_5
                 )

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = param_2 + 1;
  plVar8 = (long *)*plVar7;
  if (plVar8 == (long *)0x0) {
    plVar8 = plVar7;
LAB_00c21f88:
    lVar5 = *plVar7;
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
      *(int *)(puVar2 + 4) = param_3;
      puVar6 = puVar2 + 5;
      *puVar6 = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[2] = plVar8;
      *puVar2 = 0;
      puVar2[1] = 0;
      *plVar7 = (long)puVar2;
      if (*(long *)*param_2 == 0) {
        puVar3 = puVar2;
      }
      else {
        *param_2 = *(long *)*param_2;
        puVar3 = (undefined8 *)*plVar7;
      }
      FUN_010108e0(param_2[1],puVar3);
      param_2[2] = param_2[2] + 1;
      puVar2[7] = param_5;
      *(undefined1 *)(puVar2 + 6) = param_4;
      *(undefined1 *)((long)puVar2 + 0x31) = 0;
    }
    else {
      puVar6 = (undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x38) = param_5;
    }
    *(byte *)((long)puVar6 + 10) = *(byte *)((long)puVar6 + 10) & 0xf0;
    *puVar6 = param_1;
    return;
  }
  plVar7 = param_2 + 1;
  do {
    if (param_3 < (int)plVar8[4]) {
      plVar4 = (long *)*plVar8;
      plVar7 = plVar8;
      if (plVar4 == (long *)0x0) {
        goto LAB_00c21f88;
      }
    }
    else {
      if (param_3 <= (int)plVar8[4]) goto LAB_00c21f88;
      plVar7 = plVar8 + 1;
      plVar4 = (long *)*plVar7;
      if (plVar4 == (long *)0x0) goto LAB_00c21f88;
    }
    plVar8 = plVar4;
  } while( true );
}


