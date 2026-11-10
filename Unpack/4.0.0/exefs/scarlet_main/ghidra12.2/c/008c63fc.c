/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c63fc; name: FUN_008c63fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c63fc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  
  uVar1 = DAT_03cab628;
  uVar6 = DAT_03cab620;
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = _UNK_03cabe68;
  uVar2 = _DAT_03cabe60;
  param_1[2] = 0x100000001;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[5] = uVar1;
  param_1[4] = uVar6;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar2 = _UNK_03cabe58;
  uVar1 = _DAT_03cabe50;
  uVar6 = _DAT_03caa5b0;
  param_1[9] = _UNK_03caa5b8;
  param_1[8] = uVar6;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
  piVar5 = (int *)nn::util::BinaryFileHeader::GetFirstBlock();
  if (param_2[0x21] != 0) {
    param_1[0x21] = param_2[0x21];
    uVar6 = FUN_00896e78();
    param_1[0x20] = uVar6;
    param_1[0x22] = uVar6;
  }
  if (piVar5 != (int *)0x0) {
    do {
      if (*piVar5 == 0x50434756) {
        plVar7 = (long *)param_1[0x22];
        param_1[0x22] = plVar7 + 0x14;
        if (plVar7 != (long *)0x0) {
          *(undefined4 *)(plVar7 + 3) = 0x3f800000;
          *(undefined1 *)((long)plVar7 + 0x1c) = 1;
          puVar4 = PTR_DAT_047d24c0;
          plVar7[1] = (long)(plVar7 + 1);
          plVar7[2] = (long)(plVar7 + 1);
          *(undefined4 *)(plVar7 + 10) = 0;
          plVar7[0xb] = 0;
          plVar7[0xc] = 0;
          plVar7[0x13] = (long)(plVar7 + 0x12);
          *plVar7 = (long)(puVar4 + 0x10);
          plVar7[0xd] = 0;
          plVar7[0xe] = 0;
          plVar7[4] = 0;
          plVar7[5] = 0;
          plVar7[6] = 0;
          plVar7[7] = 0;
          plVar7[8] = 0;
          plVar7[9] = 0;
          plVar7[0xf] = 0;
          plVar7[0x10] = (long)(param_1 + 0x20);
          plVar7[0x11] = (long)(param_1 + 0x20);
          plVar7[0x12] = (long)(plVar7 + 0x12);
        }
        param_1[1] = plVar7;
        (**(code **)(*plVar7 + 0x10))
                  (plVar7,param_3,param_4,*(undefined4 *)(param_1 + 2),
                   *(undefined4 *)((long)param_1 + 0x14));
        FUN_008c65ac(param_1,param_3,param_4,param_1[1],piVar5,*(undefined4 *)(param_1 + 2),
                     *(undefined4 *)((long)param_1 + 0x14));
        break;
      }
      piVar5 = (int *)nn::util::BinaryBlockHeader::GetNextBlock();
    } while (piVar5 != (int *)0x0);
  }
  memcpy(param_1 + 4,param_2 + 4,0xd4);
  return;
}


