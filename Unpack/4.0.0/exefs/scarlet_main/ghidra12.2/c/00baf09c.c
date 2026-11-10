/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00baf09c; name: FUN_00baf09c
 */


undefined8 * FUN_00baf09c(long *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  byte *local_60;
  ulong uStack_58;
  
  plVar8 = param_1 + 1;
  if ((long *)*plVar8 == (long *)0x0) {
    plVar9 = plVar8;
LAB_00baf164:
    puVar7 = (undefined8 *)*plVar8;
    if (puVar7 == (undefined8 *)0x0) {
      lVar2 = tpidr_el0;
      plVar6 = *(long **)(lVar2 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar2 + 0x30) = DAT_04859430;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x40,8);
      std::string::string((string *)(puVar7 + 4),(string *)*param_3);
      puVar7[7] = 0;
      puVar7[2] = plVar9;
      *puVar7 = 0;
      puVar7[1] = 0;
      *plVar8 = (long)puVar7;
      if (*(long *)*param_1 == 0) {
        puVar4 = puVar7;
      }
      else {
        *param_1 = *(long *)*param_1;
        puVar4 = (undefined8 *)*plVar8;
      }
      FUN_010108e0(param_1[1],puVar4);
      param_1[2] = param_1[2] + 1;
    }
    return puVar7;
  }
  plVar6 = param_1 + 1;
  plVar9 = (long *)*plVar8;
  do {
    bVar1 = *(byte *)(plVar9 + 4);
    uStack_58 = plVar9[5];
    local_60 = (byte *)plVar9[6];
    if ((bVar1 & 1) == 0) {
      local_60 = (byte *)((long)plVar9 + 0x21);
      uStack_58 = (ulong)(bVar1 >> 1);
    }
    iVar3 = FUN_028a8144(param_2,&local_60);
    if (iVar3 < 0) {
      plVar5 = (long *)*plVar9;
      if (plVar5 == (long *)0x0) {
        plVar8 = plVar9;
        goto LAB_00baf164;
      }
      plVar6 = plVar9;
    }
    else {
      uStack_58 = (ulong)(*param_2 >> 1);
      local_60 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        uStack_58 = *(ulong *)(param_2 + 8);
        local_60 = *(byte **)(param_2 + 0x10);
      }
      iVar3 = FUN_028a8144(plVar9 + 4,&local_60);
      plVar8 = plVar6;
      if (-1 < iVar3) goto LAB_00baf164;
      plVar8 = plVar9 + 1;
      plVar5 = (long *)*plVar8;
      plVar6 = plVar8;
      if (plVar5 == (long *)0x0) goto LAB_00baf164;
    }
    plVar9 = plVar5;
  } while( true );
}


