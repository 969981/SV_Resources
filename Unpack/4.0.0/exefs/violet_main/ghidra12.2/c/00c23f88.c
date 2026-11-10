/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c23f88; name: FUN_00c23f88
 */


undefined8
FUN_00c23f88(long *param_1,int param_2,undefined1 param_3,long *param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = param_1 + 1;
  plVar9 = (long *)*plVar8;
  if (plVar9 == (long *)0x0) {
    plVar9 = plVar8;
LAB_00c24014:
    lVar7 = *plVar8;
    if (lVar7 == 0) {
      lVar7 = tpidr_el0;
      plVar6 = *(long **)(lVar7 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar7 + 0x30) = DAT_04859430;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x40,8);
      *(int *)(puVar4 + 4) = param_2;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = plVar9;
      *plVar8 = (long)puVar4;
      if (*(long *)*param_1 == 0) {
        puVar5 = puVar4;
      }
      else {
        *param_1 = *(long *)*param_1;
        puVar5 = (undefined8 *)*plVar8;
      }
      FUN_010108e0(param_1[1],puVar5);
      param_1[2] = param_1[2] + 1;
      puVar4[7] = param_5;
      *(undefined1 *)(puVar4 + 6) = param_3;
      *(undefined1 *)((long)puVar4 + 0x31) = 0;
      *(byte *)((long)puVar4 + 0x32) = *(byte *)((long)puVar4 + 0x32) & 0xf;
      uVar3 = (**(code **)(*param_4 + 0x20))(param_4,param_1[3]);
      puVar4[5] = uVar3;
      *(byte *)((long)puVar4 + 0x32) = *(byte *)((long)puVar4 + 0x32) & 0xf0;
    }
    else {
      bVar1 = *(byte *)(lVar7 + 0x32);
      *(undefined8 *)(lVar7 + 0x38) = param_5;
      *(byte *)(lVar7 + 0x32) = bVar1 & 0xf0;
      if ((bVar1 >> 4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c240dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(**(long **)(lVar7 + 0x28) + 0x20))(*(long **)(lVar7 + 0x28),param_4);
        return uVar3;
      }
      uVar3 = *(undefined8 *)(lVar7 + 0x28);
    }
    return uVar3;
  }
  plVar8 = param_1 + 1;
  do {
    if (param_2 < (int)plVar9[4]) {
      plVar6 = (long *)*plVar9;
      plVar8 = plVar9;
      if (plVar6 == (long *)0x0) {
        goto LAB_00c24014;
      }
    }
    else {
      if (param_2 <= (int)plVar9[4]) goto LAB_00c24014;
      plVar8 = plVar9 + 1;
      plVar6 = (long *)*plVar8;
      if (plVar6 == (long *)0x0) goto LAB_00c24014;
    }
    plVar9 = plVar6;
  } while( true );
}


