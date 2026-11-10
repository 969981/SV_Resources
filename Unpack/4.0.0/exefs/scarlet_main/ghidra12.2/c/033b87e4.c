/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033b87e4; name: FUN_033b87e4
 */


long FUN_033b87e4(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ThreadType *pTVar5;
  size_t sVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 uStack_1c8;
  long *local_1c0;
  undefined8 local_1b8;
  long *local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  long *local_188;
  undefined8 local_180;
  char *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  long local_160 [32];
  undefined8 local_48;
  
  lVar13 = tpidr_el0;
  lVar8 = *(long *)(lVar13 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar13 + 0x1000b8) = lVar8;
  }
  plVar14 = *(long **)(lVar8 + 0x3e0);
  if (plVar14 != (long *)0x0) {
    lVar8 = *plVar14;
    if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
      (**(code **)(lVar8 + 0x18))("ToBundle (memory view)",0x16,*(undefined8 *)(lVar8 + 0x28));
      if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
        (**(code **)(lVar8 + 0x18))("Get read format",0xf,*(undefined8 *)(lVar8 + 0x28));
      }
    }
    puVar4 = (undefined8 *)plVar14[2];
    uVar9 = (long)puVar4 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar14[3]) && (plVar14[2] = uVar9, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "LtToBundle (memory view)";
      puVar4[2] = "StGet read format";
      uVar3 = nn::os::GetSystemTick();
      puVar4[1] = uVar3;
    }
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar14[6] != 0)) {
      puVar4 = (undefined8 *)plVar14[2];
      uVar9 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar14[3]) && (plVar14[2] = uVar9, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(plVar14[6] + 8);
      }
    }
  }
  if (param_4 == (undefined8 *)0x0) {
    param_4 = &uStack_1c8;
  }
  else {
    *param_4 = 0;
  }
  local_1c0 = plVar14;
  if (*(long *)(param_1 + 8) == 0) {
    if (param_3 == 0) {
      if (DAT_0488e610 < 2) {
        if (DAT_046aaf68 == '\0') goto LAB_033b9064;
      }
      else if (DAT_046aaf68 == '\0') {
        local_1b0 = (long *)0x0;
        local_1a0 = &DAT_0488e5c0;
        uStack_198 = 2;
        pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar5);
        local_188 = (long *)0x0;
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        FUN_0322c554(&local_1b0,"Failed to read input",PTR_DAT_047d1b38);
        local_170 = 0x1c8;
        uVar7 = 0xc8920000;
LAB_033b8ec0:
        uStack_198 = CONCAT44(uVar7,(undefined4)uStack_198);
        goto LAB_033b8fc8;
      }
      local_1a0 = &DAT_0488e5c0;
      uStack_198 = 2;
      pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
      local_190 = nn::os::GetThreadId(pTVar5);
      local_1b0 = local_160;
      local_180 = 0;
      local_178 = (char *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      local_160[0]._0_1_ = '\0';
      uStack_1a8 = 0x10000000000;
      local_188 = local_1b0;
      FUN_0322c554(&local_1b0,"Failed to read input",PTR_DAT_047d1b38);
      local_170 = 0x1c8;
      uVar7 = 0xc8920000;
    }
    else {
      puVar4 = (undefined8 *)FUN_03376d70(param_2,param_3);
      if (puVar4 == (undefined8 *)0x0) {
        if (DAT_0488e610 < 2) {
          if (DAT_046aaf68 == '\0') goto LAB_033b9064;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1b0 = (long *)0x0;
          local_1a0 = &DAT_0488e5c0;
          uStack_198 = 2;
          pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
          local_190 = nn::os::GetThreadId(pTVar5);
          local_188 = (long *)0x0;
          local_180 = 0;
          local_178 = (char *)0x0;
          local_170 = 0;
          uStack_168 = 0;
          FUN_0322c554(&local_1b0,"The format was not recognized",PTR_DAT_047d1b38);
          local_170 = 0x1d8;
LAB_033b8eb4:
          uVar7 = 0xc8920001;
          goto LAB_033b8ec0;
        }
        local_1a0 = &DAT_0488e5c0;
        uStack_198 = 2;
        pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar5);
        local_1b0 = local_160;
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        local_160[0]._0_1_ = '\0';
        uStack_1a8 = 0x10000000000;
        local_188 = local_1b0;
        FUN_0322c554(&local_1b0,"The format was not recognized",PTR_DAT_047d1b38);
        local_170 = 0x1d8;
      }
      else {
        if ((code *)puVar4[2] == (code *)0x0) {
          plVar10 = (long *)0x0;
        }
        else {
          (*(code *)puVar4[2])(&local_1b0);
          plVar10 = local_1b0;
        }
        local_1b0 = (long *)0x0;
        plVar12 = *(long **)(param_1 + 8);
        *(long **)(param_1 + 8) = plVar10;
        if (plVar12 != (long *)0x0) {
          if (plVar12[1] != 0) {
            plVar10 = plVar12 + 2;
            do {
              lVar8 = *plVar10;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar2) {
                *plVar10 = lVar8 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar8 + -1 == 0) {
              (**(code **)(*plVar12 + 0x18))();
            }
          }
          if ((local_1b0 != (long *)0x0) && (local_1b0[1] != 0)) {
            plVar10 = local_1b0 + 2;
            do {
              lVar8 = *plVar10;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar2) {
                *plVar10 = lVar8 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar8 + -1 == 0) {
              (**(code **)(*local_1b0 + 0x18))();
            }
          }
          plVar10 = *(long **)(param_1 + 8);
        }
        if (plVar10 != (long *)0x0) goto LAB_033b8910;
        if (DAT_0488e610 < 2) {
          if (DAT_046aaf68 == '\0') goto LAB_033b9064;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1b0 = (long *)0x0;
          local_1a0 = &DAT_0488e5c0;
          uStack_198 = 2;
          pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
          local_190 = nn::os::GetThreadId(pTVar5);
          local_188 = (long *)0x0;
          local_180 = 0;
          local_178 = (char *)0x0;
          local_170 = 0;
          uStack_168 = 0;
          local_48 = *puVar4;
          FUN_0322c554(&local_1b0,
                       "No registered loader was found for the format \"{}\". Have you included hkCompat as a product feature or used the asset conversion tool to convert your assets?"
                       ,&DAT_044e9758,&local_48);
          local_170 = 0x1d1;
          goto LAB_033b8eb4;
        }
        local_1a0 = &DAT_0488e5c0;
        uStack_198 = 2;
        pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar5);
        local_1b0 = local_160;
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        uStack_1a8 = 0x10000000000;
        local_160[0]._0_1_ = '\0';
        local_1b8 = *puVar4;
        local_188 = local_1b0;
        FUN_0322c554(&local_1b0,
                     "No registered loader was found for the format \"{}\". Have you included hkCompat as a product feature or used the asset conversion tool to convert your assets?"
                     ,&DAT_044e9758,&local_1b8);
        local_170 = 0x1d1;
      }
      uVar7 = 0xc8920001;
    }
    uStack_198 = CONCAT44(uVar7,(undefined4)uStack_198);
LAB_033b9200:
    local_178 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/hkSerialize.cpp"
    ;
    if ((char)local_160[0] != '\0') {
      sVar6 = strlen((char *)local_160);
      *(undefined2 *)((long)local_160 + (long)(int)((int)sVar6 - (uint)((int)sVar6 == 0xff))) = 10;
      printf("%s",local_160);
      fflush(*(FILE **)PTR_stdout_047cb860);
    }
LAB_033b8fd0:
    if (((ulong)local_188 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,(long)local_188 + -1,0);
    }
  }
  else {
LAB_033b8910:
    lVar8 = *(long *)(lVar13 + 0x1000b8);
    if (lVar8 == 0) {
      lVar8 = FUN_00e5d3b4();
      *(long *)(lVar13 + 0x1000b8) = lVar8;
    }
    plVar10 = *(long **)(lVar8 + 0x3e0);
    if (plVar10 != (long *)0x0) {
      lVar8 = *plVar10;
      if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar10[6] != 0)) {
        puVar4 = (undefined8 *)plVar10[2];
        uVar9 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= (ulong)plVar10[3]) && (plVar10[2] = uVar9, puVar4 != (undefined8 *)0x0)) {
          *puVar4 = &DAT_03c4e575;
          puVar4[1] = *(undefined8 *)(plVar10[6] + 8);
        }
      }
      puVar4 = (undefined8 *)plVar10[2];
      uVar9 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar10[3]) && (plVar10[2] = uVar9, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = "StRead bundle data";
        uVar3 = nn::os::GetSystemTick();
        puVar4[1] = uVar3;
      }
      if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
        (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
      }
      if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
        (**(code **)(lVar8 + 0x18))("Read bundle data",0x10,*(undefined8 *)(lVar8 + 0x28));
      }
    }
    lVar8 = (**(code **)(**(long **)(param_1 + 8) + 0x28))
                      (*(long **)(param_1 + 8),param_2,param_3,param_4);
    if (lVar8 != 0) {
      if (*(char *)(param_1 + 0x28) == '\0') goto LAB_033b9068;
      lVar11 = *(long *)(lVar13 + 0x1000b8);
      if (lVar11 == 0) {
        lVar11 = FUN_00e5d3b4();
        *(long *)(lVar13 + 0x1000b8) = lVar11;
      }
      plVar10 = *(long **)(lVar11 + 0x3e0);
      if (plVar10 != (long *)0x0) {
        lVar13 = *plVar10;
        if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar10[6] != 0)) {
          puVar4 = (undefined8 *)plVar10[2];
          uVar9 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
          if ((uVar9 <= (ulong)plVar10[3]) && (plVar10[2] = uVar9, puVar4 != (undefined8 *)0x0)) {
            *puVar4 = &DAT_03c4e575;
            puVar4[1] = *(undefined8 *)(plVar10[6] + 8);
          }
        }
        puVar4 = (undefined8 *)plVar10[2];
        uVar9 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= (ulong)plVar10[3]) && (plVar10[2] = uVar9, puVar4 != (undefined8 *)0x0)) {
          *puVar4 = "StVersioning";
          uVar3 = nn::os::GetSystemTick();
          puVar4[1] = uVar3;
        }
        if (*(code **)(lVar13 + 0x20) != (code *)0x0) {
          (**(code **)(lVar13 + 0x20))(*(undefined8 *)(lVar13 + 0x28));
        }
        if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
          (**(code **)(lVar13 + 0x18))("Versioning",10,*(undefined8 *)(lVar13 + 0x28));
        }
      }
      plVar10 = *(long **)(param_1 + 0x10);
      if (plVar10 == (long *)0x0) {
        if (DAT_0488e630 == (code *)0x0) {
          plVar10 = (long *)0x0;
          local_1b0 = (long *)0x0;
          *(undefined8 *)(param_1 + 0x10) = 0;
        }
        else {
          (*DAT_0488e630)(&local_1b0,0);
          plVar10 = local_1b0;
          plVar12 = *(long **)(param_1 + 0x10);
          local_1b0 = (long *)0x0;
          *(long **)(param_1 + 0x10) = plVar10;
          if (plVar12 != (long *)0x0) {
            if (plVar12[1] != 0) {
              plVar10 = plVar12 + 2;
              do {
                lVar13 = *plVar10;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar2) {
                  *plVar10 = lVar13 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar13 + -1 == 0) {
                (**(code **)(*plVar12 + 0x18))(plVar12);
              }
            }
            if ((local_1b0 != (long *)0x0) && (local_1b0[1] != 0)) {
              plVar10 = local_1b0 + 2;
              do {
                lVar13 = *plVar10;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar2) {
                  *plVar10 = lVar13 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar13 + -1 == 0) {
                (**(code **)(*local_1b0 + 0x18))();
              }
            }
            plVar10 = *(long **)(param_1 + 0x10);
          }
        }
        if (plVar10 == (long *)0x0) goto LAB_033b9068;
      }
      lVar8 = (**(code **)(*plVar10 + 0x28))(plVar10,lVar8,0,0);
      if (lVar8 != 0) goto LAB_033b9068;
      if (DAT_0488e610 < 2) {
        if (DAT_046aaf68 == '\0') goto LAB_033b9064;
      }
      else if (DAT_046aaf68 == '\0') {
        local_1b0 = (long *)0x0;
        local_1a0 = &DAT_0488e5c0;
        uStack_198 = 2;
        pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar5);
        local_188 = (long *)0x0;
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        FUN_0322c554(&local_1b0,"Versioning failed",PTR_DAT_047d1b38);
        local_170 = 0x255;
        goto LAB_033b8fc8;
      }
      local_1a0 = &DAT_0488e5c0;
      uStack_198 = 2;
      pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
      local_190 = nn::os::GetThreadId(pTVar5);
      local_1b0 = local_160;
      local_180 = 0;
      local_178 = (char *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      local_160[0]._0_1_ = '\0';
      uStack_1a8 = 0x10000000000;
      local_188 = local_1b0;
      FUN_0322c554(&local_1b0,"Versioning failed",PTR_DAT_047d1b38);
      local_170 = 0x255;
      goto LAB_033b9200;
    }
    if (1 < DAT_0488e610) {
      if (DAT_046aaf68 != '\0') goto LAB_033b8c80;
      local_1b0 = (long *)0x0;
      local_1a0 = &DAT_0488e5c0;
      uStack_198 = 2;
      pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
      local_190 = nn::os::GetThreadId(pTVar5);
      local_188 = (long *)0x0;
      local_180 = 0;
      local_178 = (char *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      FUN_0322c554(&local_1b0,"Unable to load from buffer",PTR_DAT_047d1b38);
      local_170 = 0x230;
LAB_033b8fc8:
      local_178 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/hkSerialize.cpp"
      ;
      FUN_0322c8e0(&local_1b0);
      goto LAB_033b8fd0;
    }
    if (DAT_046aaf68 != '\0') {
LAB_033b8c80:
      local_1a0 = &DAT_0488e5c0;
      uStack_198 = 2;
      pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
      local_190 = nn::os::GetThreadId(pTVar5);
      local_1b0 = local_160;
      local_180 = 0;
      local_178 = (char *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      local_160[0]._0_1_ = '\0';
      uStack_1a8 = 0x10000000000;
      local_188 = local_1b0;
      FUN_0322c554(&local_1b0,"Unable to load from buffer",PTR_DAT_047d1b38);
      local_170 = 0x230;
      goto LAB_033b9200;
    }
  }
LAB_033b9064:
  lVar8 = 0;
LAB_033b9068:
  if (plVar14 != (long *)0x0) {
    lVar13 = *plVar14;
    if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar14[6] != 0)) {
      puVar4 = (undefined8 *)plVar14[2];
      uVar9 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar14[3]) && (plVar14[2] = uVar9, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(plVar14[6] + 8);
      }
    }
    puVar4 = (undefined8 *)plVar14[2];
    uVar9 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar14[3]) && (plVar14[2] = uVar9, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_03c3697b;
      uVar3 = nn::os::GetSystemTick();
      puVar4[1] = uVar3;
    }
    if (*(code **)(lVar13 + 0x20) != (code *)0x0) {
      (**(code **)(lVar13 + 0x20))(*(undefined8 *)(lVar13 + 0x28));
      if (*(code **)(lVar13 + 0x20) != (code *)0x0) {
        (**(code **)(lVar13 + 0x20))(*(undefined8 *)(lVar13 + 0x28));
      }
    }
  }
  return lVar8;
}


