/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033ae86c; name: FUN_033ae86c
 */


undefined4
FUN_033ae86c(long param_1,long *param_2,undefined4 param_3,int param_4,undefined8 param_5)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 **ppuVar6;
  undefined4 uVar7;
  ThreadType *pTVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong extraout_x1;
  ulong uVar11;
  ulong *puVar12;
  uint uVar13;
  ulong uVar14;
  char *pcVar15;
  ulong *puVar16;
  byte *local_308;
  undefined4 local_300;
  int local_2fc;
  byte local_2f8;
  undefined7 uStack_2f7;
  undefined4 local_278;
  undefined1 *local_270;
  undefined4 local_268;
  int local_264;
  undefined1 local_260 [128];
  undefined4 local_1e0;
  undefined1 *local_1d8;
  undefined4 local_1d0;
  int local_1cc;
  undefined1 local_1c8 [128];
  undefined4 local_148;
  undefined8 **local_140;
  ulong local_138;
  undefined8 *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ulong local_118;
  undefined8 local_110;
  char *pcStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_b0;
  int local_a4;
  undefined4 local_a0 [2];
  long local_98;
  long local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_a0[0] = 0x80040200;
  local_a4 = param_4;
  if (*param_2 == 0) {
    if (DAT_0488e2d8 == '\0') {
      return 0x80040200;
    }
    local_140 = (undefined8 **)0x0;
    local_130 = &DAT_0488e288;
    uStack_128 = 1;
    pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
    local_120 = nn::os::GetThreadId(pTVar8);
    local_110 = 0;
    pcStack_108 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlWriteFormat.cpp"
    ;
    local_118 = 0;
    local_100 = 0x1cf;
    uStack_f8 = 0;
    FUN_0322c554(&local_140,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_047e5dc0,"!topVar",
                 local_a0);
    FUN_0322c554(&local_140,"Trying to serialize empty Var",PTR_DAT_047d1b38);
  }
  else {
    local_a0[0] = 0x80040200;
    puVar16 = (ulong *)param_2[1];
    uVar11 = 0;
    puVar12 = puVar16;
    do {
      uVar13 = (uint)*puVar12;
      if ((uVar13 >> 0x15 & 1) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = CONCAT44(uVar13,uVar13) & 0x1fffff001fffff;
        uVar14 = puVar12[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8)) +
                                      POPCOUNT((char)(uVar14 >> 0x10))) + 2];
      }
      uVar11 = uVar14 | uVar11;
    } while (((*puVar12 & 1) == 0) && (puVar12 = (ulong *)puVar12[1], puVar12 != (ulong *)0x0));
    if ((uVar11 & 3) == 0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(*(long **)(param_1 + 0x20),puVar16);
      FUN_033ae288(param_1,param_2);
      local_130 = (undefined8 *)((ulong)local_130 & 0xffffffffffffff00);
      local_b0 = 1;
      local_140 = &local_130;
      pcVar15 = "object";
      local_138 = 0x8000008000000001;
      if (param_4 != 0) {
        FUN_031c8978(&local_140,"annotates=\"object{}\"",&DAT_044e9048,&local_a4);
        pcVar15 = "object";
        if (local_a4 != 0) {
          pcVar15 = "note";
        }
      }
      ppuVar6 = local_140;
      local_1d8 = local_1c8;
      local_1cc = -0x7fffff80;
      local_1d0 = 1;
      local_270 = local_260;
      local_148 = 1;
      local_1c8[0] = 0;
      local_268 = 1;
      local_264 = -0x7fffff80;
      local_1e0 = 1;
      local_260[0] = 0;
      uVar9 = FUN_031e12d8(puVar16,&local_1d8,0,0);
      FUN_031c6c18(&local_270,"<%s id=\"object%d\" typeid=\"type%d\" %s> <!-- %s -->",pcVar15,
                   param_3,extraout_x1 & 0xffffffff,ppuVar6,uVar9);
      uVar7 = FUN_033adeb8(*(undefined8 *)(param_1 + 0x18),local_270);
      *(int *)(*(long *)(param_1 + 0x18) + 8) = *(int *)(*(long *)(param_1 + 0x18) + 8) + 1;
      local_80 = *(undefined8 *)(param_1 + 0x18);
      local_70 = *(undefined8 *)(param_1 + 0x20);
      local_90 = param_2[1];
      local_88 = param_2[2];
      if ((local_88 & 1) != 0) {
        piVar1 = (int *)((local_88 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_98 = *param_2;
      uStack_78 = param_5;
      FUN_031e1bb4(&local_308,local_90,PTR_DAT_047e5b68);
      if ((local_2f8 & 1) != 0) {
        plVar10 = (long *)(CONCAT71(uStack_2f7,local_2f8) & 0xfffffffffffffffe);
        plVar2 = plVar10 + 1;
        do {
          lVar5 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      FUN_033b0858(&local_80,&local_98,0,local_308);
      if ((local_88 & 1) != 0) {
        plVar10 = (long *)(local_88 & 0xfffffffffffffffe);
        plVar2 = plVar10 + 1;
        do {
          lVar5 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      *(int *)(*(long *)(param_1 + 0x18) + 8) = *(int *)(*(long *)(param_1 + 0x18) + 8) + -1;
      local_308 = &local_2f8;
      local_278 = 1;
      local_300 = 1;
      local_2fc = -0x7fffff80;
      local_2f8 = 0;
      FUN_031c6c18(&local_308,"</%s>",pcVar15);
      FUN_033adeb8(*(undefined8 *)(param_1 + 0x18),local_308);
      local_300 = 0;
      if ((-1 < local_2fc) && (local_308 != (byte *)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
      local_268 = 0;
      if ((-1 < local_264) && (local_270 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
      local_1d0 = 0;
      if ((-1 < local_1cc) && (local_1d8 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
      uVar11 = local_138;
      local_138 = local_138 & 0xffffffff00000000;
      if ((-1 < (long)uVar11) && (local_140 != (undefined8 **)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
      return uVar7;
    }
    if (DAT_0488e2d8 == '\0') {
      return 0x80040200;
    }
    local_140 = (undefined8 **)0x0;
    local_130 = &DAT_0488e288;
    uStack_128 = 1;
    pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
    local_120 = nn::os::GetThreadId(pTVar8);
    local_110 = 0;
    pcStack_108 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlWriteFormat.cpp"
    ;
    local_118 = 0;
    local_100 = 0x1d0;
    uStack_f8 = 0;
    FUN_0322c554(&local_140,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_047e68a0,
                 "!topVar.getType()->isSerializable()",local_a0);
    local_1d8 = (undefined1 *)param_2[1];
    FUN_0322c554(&local_140,"Trying to serialize instance of non-serializable type \'{}\'",
                 PTR_DAT_047e5e48,&local_1d8);
  }
  FUN_0322c8e0(&local_140);
  if ((local_118 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_118 - 1,0);
  }
  return local_a0[0];
}


