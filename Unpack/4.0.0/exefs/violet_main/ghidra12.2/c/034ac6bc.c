/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ac6bc; name: FUN_034ac6bc
 */


void FUN_034ac6bc(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 param_4,int param_5
                 )

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long *local_68;
  ulong local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  puVar4 = (undefined4 *)FUN_034c86d0(0x3f800000,param_3,0xb);
  if (puVar4 != (undefined4 *)0x0) {
    if (*(long *)(puVar4 + 2) != 0) {
      FUN_034e6c0c(param_1,*(undefined8 *)PTR_DAT_047e7038,*(long *)(puVar4 + 2),0xb,param_5,param_4
                   ,0);
      return;
    }
    if (param_5 == 0) {
      pbVar7 = (byte *)param_3[3];
      if (pbVar7 != (byte *)0x0) {
        bVar3 = *pbVar7;
        uVar1 = (uint)bVar3;
        if (bVar3 < 2) {
          uVar1 = 1;
        }
        uVar6 = (ulong)uVar1;
        pbVar8 = pbVar7 + ((ulong)(bVar3 + 4) & 0x1fc);
        do {
          pbVar7 = pbVar7 + 1;
          if (*pbVar7 == 0xb) goto LAB_034ac7d4;
          pbVar8 = pbVar8 + 0x10;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      pbVar8 = (byte *)0x0;
LAB_034ac7d4:
      local_68 = (long *)param_3[1];
      lVar2 = param_3[2];
      local_60 = CONCAT71(local_60._1_7_,lVar2 == 0) | 0x2c;
      if (lVar2 == 0) {
        (**(code **)(*local_68 + 0xd0))(param_1,local_68,&local_68,0);
      }
      else {
        (**(code **)(*local_68 + 0xd8))(param_1,local_68,lVar2,&local_68,0);
      }
      *(int *)pbVar8 = (int)param_1;
      pbVar8[8] = 0;
      pbVar8[9] = 0;
      pbVar8[10] = 0;
      pbVar8[0xb] = 0;
      pbVar8[0xc] = 0;
      pbVar8[0xd] = 0;
      pbVar8[0xe] = 0;
      pbVar8[0xf] = 0;
    }
    else {
      local_58 = *puVar4;
      local_60 = 0xb;
      local_48 = 0xb;
      local_44 = 0x100;
      local_42 = 0;
      local_68 = param_3;
      local_54 = (int)param_1;
      local_50 = param_5;
      uStack_4c = param_4;
      uVar5 = FUN_034e6ab0(*(undefined8 *)PTR_DAT_047e7038,&local_68,0);
      *(undefined8 *)(puVar4 + 2) = uVar5;
    }
  }
  return;
}


