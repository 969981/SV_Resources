/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0152a0e8; name: FUN_0152a0e8
 */


void FUN_0152a0e8(long param_1,uint param_2,long *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  code *pcVar18;
  byte *pbVar19;
  ulong uVar20;
  long *plVar21;
  
  uVar12 = (**(code **)(*param_3 + 0x98))(param_3);
  bVar1 = *(byte *)(param_4 + 0x10);
  bVar2 = *(byte *)(param_4 + 0x13);
  bVar11 = *(byte *)(param_4 + 0xd);
  bVar3 = *(byte *)(param_4 + 0x16);
  bVar4 = *(byte *)(param_4 + 0x19);
  uVar20 = 0;
  uVar17 = (uint)bVar11;
  bVar5 = *(byte *)(param_4 + 0x1c);
  bVar6 = *(byte *)(param_4 + 0x1f);
  bVar7 = *(byte *)(param_4 + 0x22);
  bVar8 = *(byte *)(param_4 + 0x28);
  bVar9 = *(byte *)(param_4 + 0x2b);
  bVar10 = *(byte *)(param_4 + 0x25);
  pbVar19 = (byte *)(param_4 + 0x10);
  do {
    if ((bVar11 != 0) && (bVar11 = pbVar19[-2], bVar11 != 0)) {
      uVar13 = FUN_0152a068(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),uVar20 & 0xffffffff);
      uVar14 = FUN_0128ab58(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x290),uVar12,uVar13);
      if (((uVar14 ^ param_2) & 1) == 0) {
        *(undefined8 *)(param_1 + 0x19c) = 0;
        *(undefined8 *)(param_1 + 0x194) = 0;
        *(undefined8 *)(param_1 + 0x18c) = 0;
        *(undefined8 *)(param_1 + 0x184) = 0;
        if (bVar11 == 2) {
          *(undefined4 *)(param_1 + 0x17c) = 0x2d6;
          *(undefined2 *)(param_1 + 0x180) = 0x1100;
          *(undefined4 *)(param_1 + 0x184) = uVar12;
LAB_0152a2e0:
          plVar21 = *(long **)(param_1 + 0x1b0);
          if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_0152a2f4:
            uVar15 = FUN_014aeb48(param_1);
            if (((uVar15 & 1) == 0) ||
               (uVar15 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar15 & 1) != 0))
            goto LAB_0152a340;
LAB_0152a310:
            uVar16 = 1;
          }
          else {
            uVar15 = FUN_014aeb48(param_1);
            if ((((uVar15 & 1) == 0) || (uVar15 = FUN_014aeb20(param_1,1), (uVar15 & 1) == 0)) &&
               (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) == '\0')) {
              if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) == '\0') goto LAB_0152a2f4;
              goto LAB_0152a310;
            }
LAB_0152a340:
            uVar16 = 0;
          }
          pcVar18 = *(code **)(*plVar21 + 0x1f8);
        }
        else {
          if (bVar1 + uVar17 + (uint)bVar2 + (uint)bVar3 + (uint)bVar4 + (uint)bVar5 + (uint)bVar6 +
              (uint)bVar7 + (uint)bVar10 + (uint)bVar8 + (uint)bVar9 != 1) {
            *(undefined4 *)(param_1 + 0x17c) = 0x41c;
            *(undefined2 *)(param_1 + 0x180) = 0x1100;
            *(undefined4 *)(param_1 + 0x184) = uVar13;
            goto LAB_0152a2e0;
          }
          *(undefined4 *)(param_1 + 0x17c) = 0x81;
          *(undefined2 *)(param_1 + 0x180) = 0x100;
          plVar21 = *(long **)(param_1 + 0x1b0);
          if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_0152a23c:
            uVar15 = FUN_014aeb48(param_1);
            if (((uVar15 & 1) == 0) ||
               (uVar15 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar15 & 1) != 0))
            goto LAB_0152a2a8;
LAB_0152a258:
            uVar16 = 1;
          }
          else {
            uVar15 = FUN_014aeb48(param_1);
            if ((((uVar15 & 1) == 0) || (uVar15 = FUN_014aeb20(param_1,1), (uVar15 & 1) == 0)) &&
               (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) == '\0')) {
              if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) == '\0') goto LAB_0152a23c;
              goto LAB_0152a258;
            }
LAB_0152a2a8:
            uVar16 = 0;
          }
          pcVar18 = *(code **)(*plVar21 + 0x1f8);
        }
        (*pcVar18)(plVar21,uVar12,param_1 + 0x17c,uVar16,1,0,1);
      }
    }
    if (uVar20 == 10) {
      return;
    }
    bVar11 = *pbVar19;
    uVar20 = uVar20 + 1;
    pbVar19 = pbVar19 + 3;
  } while( true );
}


