/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a7a0e4; name: FUN_01a7a0e4
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_01a7a0e4(long param_1,undefined8 param_2,long *param_3,long *param_4,undefined4 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  
  lVar10 = FUN_01a7a6e0(param_1,param_5);
  if (lVar10 < 0x1894adc72b09b50c) {
    if (lVar10 < -0x1b112ab9917c1ea9) {
      if (-0x24f69329162e8d2e < lVar10) {
        if (lVar10 == -0x24f69329162e8d2d) {
          plVar14 = (long *)(**(code **)param_4[5])(param_4 + 5);
          if (((*PTR_DAT_047d3f00 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar9 != 0)) {
            uVar15 = FUN_01b07aa4();
            *(undefined8 *)PTR_DAT_047d3f08 = uVar15;
            __cxa_guard_release(PTR_DAT_047d3f00);
          }
          while( true ) {
            if (plVar14 == (long *)0x0) {
              return 0x1000;
            }
            if (plVar14 == (long *)PTR_DAT_047d3f08) break;
            plVar14 = (long *)*plVar14;
          }
          uVar11 = FUN_0298a91c((short)param_4[0xe2],(short)param_4[0xe3]);
        }
        else {
          if (lVar10 != -0x1e7cbeaa19a01f4b) {
            return 0x1000;
          }
          uVar11 = (**(code **)(*param_4 + 0x228))(param_4,1);
        }
        if ((uVar11 & 1) == 0) {
          return 0x1000;
        }
        return 0x4000;
      }
      if (lVar10 == -0x66e559137d64d274) {
        pcVar12 = (char *)FUN_0123e06c(param_1);
        if (*pcVar12 == '\0') {
          return 0x1000;
        }
        return 0x3000;
      }
      if (lVar10 != -0x3f37124a9d5a82a9) {
        return 0x1000;
      }
      uVar7 = (**(code **)(*param_3 + 0x118))(param_3);
      uVar8 = (**(code **)(*param_4 + 0x118))(param_4);
      uVar8 = uVar8 & 0xff;
      uVar7 = uVar7 & 0xff;
      if (uVar8 <= uVar7 >> 2) {
        return 0x8000;
      }
      if (uVar8 <= uVar7 >> 1) {
        return 0x4000;
      }
      iVar9 = 0x2000;
      if (uVar7 <= uVar8) {
        iVar9 = 0x1000;
      }
      return iVar9;
    }
    if (lVar10 < -0x1529e97ce44c7bec) {
      if (lVar10 == -0x1b112ab9917c1ea9) {
        if ((*(byte *)(*(long *)(param_1 + 0x38) + 0x498) & 3) == 0) {
          return 0x1000;
        }
        return 0x3800;
      }
      if (lVar10 != -0x1784ec0c016524e3) {
        return 0x1000;
      }
      if ((*(byte *)(*(long *)(param_1 + 0x38) + 0x498) & 1) == 0) {
        return 0x1000;
      }
      return 0x4000;
    }
    if (lVar10 != -0x1529e97ce44c7bec) {
      if (lVar10 == -0x12e1f1bf030808c4) {
        return 0x2000;
      }
      return 0x1000;
    }
    uVar11 = (**(code **)(*param_4 + 0x300))(param_4,10);
    if ((uVar11 & 1) != 0) {
      return 0x3800;
    }
    uVar11 = (**(code **)(*param_4 + 0x300))(param_4,6);
  }
  else {
    if (lVar10 < 0x5559feba87b46f24) {
      if (0x36e104fc4b145eca < lVar10) {
        if (lVar10 == 0x36e104fc4b145ecb) {
          bVar6 = (**(code **)(*param_4 + 0x130))(param_4);
          if (bVar6 < 100) {
            return 0x1000;
          }
          return 0x4000;
        }
        if (lVar10 != 0x45959e68eb650e40) {
          return 0x1000;
        }
        uVar15 = FUN_02115a34(param_2);
        lVar10 = FUN_01249380(uVar15,0);
        if (lVar10 == 0) {
          return 0x5000;
        }
        return 0x1000;
      }
      if (lVar10 != 0x1894adc72b09b50c) {
        if (lVar10 == 0x2a49ddaf3e13bb35) {
          return 0x1800;
        }
        return 0x1000;
      }
      puVar13 = (undefined8 *)(**(code **)param_3[5])(param_3 + 5);
      puVar3 = PTR_DAT_047d3f08;
      puVar2 = PTR_DAT_047d3f00;
      if (((*PTR_DAT_047d3f00 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar9 != 0)) {
        uVar15 = FUN_01b07aa4();
        *(undefined8 *)puVar3 = uVar15;
        __cxa_guard_release(PTR_DAT_047d3f00);
      }
      do {
        plVar14 = (long *)0x0;
        if (puVar13 == (undefined8 *)0x0) {
LAB_01a7a4dc:
          puVar13 = (undefined8 *)(**(code **)param_4[5])();
          if (((*puVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar9 != 0)) {
            uVar15 = FUN_01b07aa4();
            *(undefined8 *)puVar3 = uVar15;
            __cxa_guard_release(PTR_DAT_047d3f00);
          }
          while( true ) {
            if (puVar13 == (undefined8 *)0x0) {
              return 0x1000;
            }
            if (puVar13 == (undefined8 *)puVar3) break;
            puVar13 = (undefined8 *)*puVar13;
          }
          if (plVar14 == (long *)0x0) {
            return 0x1000;
          }
          lVar10 = plVar14[0xe2];
          cVar4 = (**(code **)(*param_3 + 0x120))(param_3);
          lVar1 = param_4[0xe2];
          cVar5 = (**(code **)(*param_4 + 0x120))(param_4);
          if ((short)lVar10 != (short)lVar1) {
            return 0x1000;
          }
          if (cVar4 == cVar5) {
            return 0x1000;
          }
          return 0x8000;
        }
        if (puVar13 == (undefined8 *)puVar3) {
          plVar14 = param_3;
          goto LAB_01a7a4dc;
        }
        puVar13 = (undefined8 *)*puVar13;
      } while( true );
    }
    if (lVar10 < 0x6a908e8d544bdb5e) {
      if (lVar10 == 0x5559feba87b46f24) {
        uVar11 = FUN_01a7a01c(param_4);
        iVar9 = 0x5000;
        if ((uVar11 & 1) == 0) {
          iVar9 = 0x19a;
        }
        return iVar9;
      }
      if (lVar10 != 0x65f6ff1f16adea11) {
        return 0x1000;
      }
      uVar15 = FUN_02115a34(param_2);
      iVar9 = FUN_01249380(uVar15,0);
      iVar9 = iVar9 * 0x4cd + 0x1000;
      if (0x3fff < iVar9) {
        iVar9 = 0x4000;
      }
      return iVar9;
    }
    if (lVar10 != 0x6a908e8d544bdb5e) {
      if (lVar10 != 0x6df34298d30de03c) {
        return 0x1000;
      }
      bVar6 = (**(code **)(*param_4 + 0x118))(param_4);
      if (0x1d < bVar6) {
        return 0x1000;
      }
      uVar8 = 0x29 - bVar6;
      if (0x27 < (uVar8 & 0xffff)) {
        uVar8 = 0x28;
      }
      return (int)((float)((uVar8 & 0xffff) << 0xc) + 0.5) / 10;
    }
    uVar11 = FUN_0210c380(param_1,param_4);
  }
  if ((uVar11 & 1) == 0) {
    return 0x1000;
  }
  return 0x3800;
}


