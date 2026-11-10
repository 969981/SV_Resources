/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c6998; name: FUN_008c6998
 */


undefined8
FUN_008c6998(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5,
            long param_6,int param_7,int param_8)

{
  undefined *puVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_44;
  
  piVar2 = (int *)nn::util::BinaryFileHeader::GetFirstBlock();
  if (piVar2 != (int *)0x0) {
    do {
      if (*piVar2 == 0x50434756) {
        lVar4 = FUN_008c6ba8(param_6);
        if (lVar4 + 0xe0 != 0) {
          param_1[0x21] = lVar4 + 0xe0;
          lVar4 = FUN_00896e78();
          param_1[0x20] = lVar4;
          param_1[0x22] = lVar4;
        }
        break;
      }
      piVar2 = (int *)nn::util::BinaryBlockHeader::GetNextBlock();
    } while (piVar2 != (int *)0x0);
  }
  *param_1 = param_6;
  if (param_7 < 1) {
    *(int *)(param_1 + 2) = (int)*(float *)(param_6 + 0x20);
  }
  else {
    *(int *)(param_1 + 2) = param_7;
  }
  if (param_8 < 1) {
    *(int *)((long)param_1 + 0x14) = (int)*(float *)(param_6 + 0x24);
    piVar2 = (int *)nn::util::BinaryFileHeader::GetFirstBlock();
  }
  else {
    *(int *)((long)param_1 + 0x14) = param_8;
    piVar2 = (int *)nn::util::BinaryFileHeader::GetFirstBlock();
  }
  if (piVar2 != (int *)0x0) {
    do {
      if (*piVar2 == 0x50434756) {
        plVar3 = (long *)param_1[0x22];
        param_1[0x22] = (long)(plVar3 + 0x14);
        if (plVar3 != (long *)0x0) {
          *(undefined4 *)(plVar3 + 3) = 0x3f800000;
          *(undefined1 *)((long)plVar3 + 0x1c) = 1;
          puVar1 = PTR_DAT_047d24c0 + 0x10;
          plVar3[1] = (long)(plVar3 + 1);
          plVar3[2] = (long)(plVar3 + 1);
          plVar3[0xb] = 0;
          plVar3[0xc] = 0;
          plVar3[0x13] = (long)(plVar3 + 0x12);
          *plVar3 = (long)puVar1;
          *(undefined4 *)(plVar3 + 10) = 0;
          plVar3[0xd] = 0;
          plVar3[0xe] = 0;
          plVar3[4] = 0;
          plVar3[5] = 0;
          plVar3[6] = 0;
          plVar3[7] = 0;
          plVar3[8] = 0;
          plVar3[9] = 0;
          plVar3[0xf] = 0;
          plVar3[0x10] = (long)(param_1 + 0x20);
          plVar3[0x11] = (long)(param_1 + 0x20);
          plVar3[0x12] = (long)(plVar3 + 0x12);
        }
        param_1[1] = (long)plVar3;
        (**(code **)(*plVar3 + 0x10))
                  (plVar3,param_3,param_4,(int)param_1[2],*(undefined4 *)((long)param_1 + 0x14));
        lVar4 = FUN_008c65ac(param_1,param_3,param_4,param_1[1],piVar2,(int)param_1[2],
                             *(undefined4 *)((long)param_1 + 0x14));
        if (param_2 != (long *)0x0) {
          *param_2 = *param_2 + lVar4;
        }
        break;
      }
      piVar2 = (int *)nn::util::BinaryBlockHeader::GetNextBlock();
    } while (piVar2 != (int *)0x0);
  }
  local_44 = 0;
  uVar5 = (**(code **)(*param_5 + 0x90))(param_5,param_3,0x52475456,1,&local_44);
  FUN_008c1318(param_1 + 4,uVar5);
  return 1;
}


