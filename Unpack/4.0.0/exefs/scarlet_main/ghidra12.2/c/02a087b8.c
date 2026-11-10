/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a087b8; name: FUN_02a087b8
 */


void FUN_02a087b8(undefined1 *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6,void *param_7,void *param_8,long *param_9,long param_10,
                 long param_11,undefined2 param_12)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  long *local_3b8;
  char *local_3b0;
  ulong local_3a8;
  long *local_3a0;
  char acStack_398 [32];
  char acStack_378 [32];
  undefined2 local_358;
  undefined2 local_356;
  undefined4 local_354;
  undefined1 local_350;
  undefined1 local_34f;
  undefined1 local_34e;
  undefined1 local_34d;
  uint local_340 [16];
  undefined1 auStack_300 [72];
  undefined1 auStack_2b8 [72];
  undefined4 local_270;
  undefined4 local_26c;
  undefined2 local_268;
  undefined8 local_266;
  undefined8 uStack_25e;
  undefined4 local_256;
  undefined4 local_252;
  undefined2 local_24e;
  undefined8 local_24c;
  undefined8 local_244;
  undefined4 local_23c;
  undefined4 local_238;
  undefined2 local_234;
  undefined8 local_232;
  undefined8 local_22a;
  undefined4 local_222;
  undefined4 local_21e;
  undefined2 local_21a;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined2 local_200;
  undefined8 local_1fe;
  undefined8 uStack_1f6;
  undefined4 local_1ee;
  undefined4 local_1ea;
  undefined2 local_1e6;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined8 local_1ca;
  undefined8 local_1c2;
  undefined4 local_1ba;
  undefined4 local_1b6;
  undefined2 local_1b2;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined2 local_198;
  undefined8 local_196;
  undefined8 uStack_18e;
  undefined4 local_186;
  undefined4 local_182;
  undefined2 local_17e;
  undefined8 local_17c;
  undefined8 local_174;
  undefined4 local_16c;
  undefined4 local_168;
  undefined2 local_164;
  undefined8 local_162;
  undefined8 uStack_15a;
  undefined4 local_152;
  undefined4 local_14e;
  undefined2 local_14a;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 auStack_138 [4];
  undefined1 auStack_134 [32];
  undefined1 auStack_114 [4];
  undefined1 auStack_110 [32];
  char acStack_f0 [32];
  char acStack_d0 [32];
  char acStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  
  if ((((*param_2 == 0) || (*param_3 == 0)) || (*param_4 == 0)) || (*param_9 == 0)) {
    *param_1 = 0;
  }
  else {
    memset(acStack_398,0,0x2f0);
    snprintf(acStack_398,0x20,"%s",param_5);
    FUN_01cfa5b0(&local_3b8,param_10 + 8);
    uVar16 = (ulong)&local_3b8 | 1;
    if (((ulong)local_3b8 & 1) != 0) {
      uVar16 = local_3a8;
    }
    snprintf(acStack_378,0x20,"%s",uVar16);
    if (((ulong)local_3b8 & 1) != 0) {
      (**(code **)(*local_3a0 + 0x18))(local_3a0,local_3a8,(ulong)local_3b8 & 0xfffffffffffffffe,1);
    }
    local_358 = param_12;
    local_356 = (undefined2)(int)((double)*(int *)(param_11 + 0xe4) * 0.001);
    local_354 = *(undefined4 *)(param_11 + 0xe8);
    local_350 = (undefined1)*(undefined4 *)(param_10 + 0x4c);
    lVar14 = *param_9;
    local_34f = *(undefined1 *)(lVar14 + 0x274);
    local_34e = *(undefined1 *)(lVar14 + 0x275);
    local_34d = *(undefined1 *)(lVar14 + 0x81);
    plVar13 = (long *)*param_2;
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 5;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar8 == -1) goto LAB_02a08f64;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar8 == -1) goto LAB_02a08f64;
      bVar2 = *(byte *)(plVar13 + 0x12);
      if ((ulong)bVar2 != 0) {
        uVar16 = 0;
        puVar15 = local_340;
        do {
          lVar8 = (**(code **)(*plVar13 + 0x60))(plVar13,uVar16 & 0xffffffff);
          if (lVar8 != 0) {
            uVar9 = FUN_00cf44f4(*(undefined8 *)(lVar8 + 0x70));
            uVar10 = FUN_00cf41a8(*(undefined8 *)(lVar8 + 0x70));
            uVar11 = FUN_00cec030(*(undefined8 *)(lVar8 + 0x70));
            uVar5 = FUN_00eedbc8(*(undefined8 *)(lVar8 + 0x70),0);
            lVar12 = FUN_00eedbc8(*(undefined8 *)(lVar8 + 0x70),1);
            uVar6 = FUN_00eedbc8(*(undefined8 *)(lVar8 + 0x70),2);
            iVar7 = FUN_00eedbc8(*(undefined8 *)(lVar8 + 0x70),3);
            *puVar15 = uVar6 & 0xffff | iVar7 << 0x10;
            *(ulong *)(puVar15 + -2) =
                 uVar9 & 0xffff | (uVar10 & 0xff) << 0x10 | (uVar11 & 0xff) << 0x18 |
                 (ulong)(uVar5 & 0xffff) << 0x20 | lVar12 << 0x30;
          }
          uVar16 = uVar16 + 1;
          puVar15 = puVar15 + 3;
        } while (bVar2 != uVar16);
      }
      do {
        lVar8 = *plVar1;
        iVar7 = (int)lVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      else if ((int)lVar8 == 0) goto LAB_02a08f8c;
      do {
        lVar8 = *plVar1;
        iVar7 = (int)lVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      else if ((int)lVar8 == 0) goto LAB_02a08f8c;
    }
    param_3 = (long *)*param_3;
    if (param_3 == (long *)0x0) {
      local_3b8 = (long *)0x0;
    }
    else {
      plVar13 = param_3 + 5;
      do {
        lVar8 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = (int)lVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar8 == -1) goto LAB_02a08f64;
      do {
        lVar8 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = (int)lVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_3b8 = param_3;
      if ((int)lVar8 == -1) goto LAB_02a08f64;
    }
    FUN_02a09ddc(auStack_300,&local_3b8,lVar14 + 0x124);
    if (local_3b8 != (long *)0x0) {
      plVar13 = local_3b8 + 5;
      do {
        lVar8 = *plVar13;
        iVar7 = (int)lVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_3b8 + 0x10))();
      }
      else if ((int)lVar8 == 0) goto LAB_02a08f8c;
    }
    if (param_3 != (long *)0x0) {
      plVar13 = param_3 + 5;
      do {
        lVar8 = *plVar13;
        iVar7 = (int)lVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*param_3 + 0x10))(param_3);
      }
      else if ((int)lVar8 == 0) goto LAB_02a08f8c;
    }
    param_4 = (long *)*param_4;
    if (param_4 == (long *)0x0) {
      local_3b8 = (long *)0x0;
    }
    else {
      plVar13 = param_4 + 5;
      do {
        lVar8 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = (int)lVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar8 == -1) {
LAB_02a08f64:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      do {
        lVar8 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = (int)lVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_3b8 = param_4;
      if ((int)lVar8 == -1) goto LAB_02a08f64;
    }
    FUN_02a09ddc(auStack_2b8,&local_3b8,lVar14 + 0x1cc);
    if (local_3b8 != (long *)0x0) {
      plVar13 = local_3b8 + 5;
      do {
        lVar8 = *plVar13;
        iVar7 = (int)lVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_3b8 + 0x10))();
      }
      else if ((int)lVar8 == 0) goto LAB_02a08f8c;
    }
    if (param_4 != (long *)0x0) {
      plVar13 = param_4 + 5;
      do {
        lVar8 = *plVar13;
        iVar7 = (int)lVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*param_4 + 0x10))(param_4);
      }
      else if ((int)lVar8 == 0) {
LAB_02a08f8c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    local_268 = *(undefined2 *)(lVar14 + 0x128);
    local_270 = *(undefined4 *)(lVar14 + 0x124);
    local_266 = *(undefined8 *)(lVar14 + 0x130);
    uStack_25e = *(undefined8 *)(lVar14 + 0x138);
    local_26c = *(undefined4 *)(lVar14 + 0x12a);
    local_256 = *(undefined4 *)(lVar14 + 0x140);
    local_252 = *(undefined4 *)(lVar14 + 0x146);
    local_24e = *(undefined2 *)(lVar14 + 0x144);
    local_24c = *(undefined8 *)(lVar14 + 0x14c);
    local_244 = *(undefined8 *)(lVar14 + 0x154);
    local_23c = *(undefined4 *)(lVar14 + 0x15c);
    local_238 = *(undefined4 *)(lVar14 + 0x162);
    local_234 = *(undefined2 *)(lVar14 + 0x160);
    local_232 = *(undefined8 *)(lVar14 + 0x168);
    local_22a = *(undefined8 *)(lVar14 + 0x170);
    local_222 = *(undefined4 *)(lVar14 + 0x178);
    local_21e = *(undefined4 *)(lVar14 + 0x17e);
    local_21a = *(undefined2 *)(lVar14 + 0x17c);
    local_218 = *(undefined8 *)(lVar14 + 0x184);
    uStack_210 = *(undefined8 *)(lVar14 + 0x18c);
    local_208 = *(undefined4 *)(lVar14 + 0x194);
    local_204 = *(undefined4 *)(lVar14 + 0x19a);
    local_200 = *(undefined2 *)(lVar14 + 0x198);
    local_1fe = *(undefined8 *)(lVar14 + 0x1a0);
    uStack_1f6 = *(undefined8 *)(lVar14 + 0x1a8);
    local_1ee = *(undefined4 *)(lVar14 + 0x1b0);
    local_1ea = *(undefined4 *)(lVar14 + 0x1b6);
    local_1e6 = *(undefined2 *)(lVar14 + 0x1b4);
    local_1e4 = *(undefined8 *)(lVar14 + 0x1bc);
    local_1dc = *(undefined8 *)(lVar14 + 0x1c4);
    local_1d4 = *(undefined4 *)(lVar14 + 0x1cc);
    local_1d0 = *(undefined4 *)(lVar14 + 0x1d2);
    local_1cc = *(undefined2 *)(lVar14 + 0x1d0);
    local_1ca = *(undefined8 *)(lVar14 + 0x1d8);
    local_1c2 = *(undefined8 *)(lVar14 + 0x1e0);
    local_1ba = *(undefined4 *)(lVar14 + 0x1e8);
    local_1b6 = *(undefined4 *)(lVar14 + 0x1ee);
    local_1b2 = *(undefined2 *)(lVar14 + 0x1ec);
    local_1b0 = *(undefined8 *)(lVar14 + 500);
    local_1a8 = *(undefined8 *)(lVar14 + 0x1fc);
    local_1a0 = *(undefined4 *)(lVar14 + 0x204);
    local_19c = *(undefined4 *)(lVar14 + 0x20a);
    local_198 = *(undefined2 *)(lVar14 + 0x208);
    local_196 = *(undefined8 *)(lVar14 + 0x210);
    uStack_18e = *(undefined8 *)(lVar14 + 0x218);
    local_186 = *(undefined4 *)(lVar14 + 0x220);
    local_182 = *(undefined4 *)(lVar14 + 0x226);
    local_17e = *(undefined2 *)(lVar14 + 0x224);
    local_17c = *(undefined8 *)(lVar14 + 0x22c);
    local_174 = *(undefined8 *)(lVar14 + 0x234);
    local_16c = *(undefined4 *)(lVar14 + 0x23c);
    local_168 = *(undefined4 *)(lVar14 + 0x242);
    local_164 = *(undefined2 *)(lVar14 + 0x240);
    local_162 = *(undefined8 *)(lVar14 + 0x248);
    uStack_15a = *(undefined8 *)(lVar14 + 0x250);
    local_152 = *(undefined4 *)(lVar14 + 600);
    local_14e = *(undefined4 *)(lVar14 + 0x25e);
    local_14a = *(undefined2 *)(lVar14 + 0x25c);
    local_148 = *(undefined8 *)(lVar14 + 0x264);
    local_140 = *(undefined8 *)(lVar14 + 0x26c);
    memcpy(auStack_138,param_7,0x24);
    memcpy(auStack_114,param_8,0x24);
    snprintf(acStack_f0,0x20,"%s",param_5);
    snprintf(acStack_d0,0x20,"%s",param_6);
    FUN_02a08fb4(&local_3b8,param_2);
    if (*local_3b0 != '\0') {
      snprintf(acStack_b0,8,"%s");
    }
    local_70 = 0;
    local_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    FUN_01e74ef0(&local_88,0x1a,auStack_134,0xd);
    local_90 = 0;
    local_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    FUN_01e74ef0(&local_a8,0x1a,auStack_110,0xd);
    memcpy(param_1 + 4,acStack_398,0x2f0);
    *param_1 = 1;
    if (local_3a0 != (long *)0x0) {
      (**(code **)(*local_3a0 + 0x20))();
    }
  }
  return;
}


