/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c50644; name: FUN_00c50644
 */


void FUN_00c50644(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  uint uVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_48;
  undefined4 local_44;
  
  puVar6 = PTR_DAT_047e0cb8;
  puVar4 = *(uint **)(param_1 + 0xe0);
  for (puVar3 = *(uint **)(param_1 + 0xd8); puVar3 != puVar4; puVar3 = puVar3 + 8) {
    lVar9 = *(long *)(puVar3 + 2);
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    if (lVar9 == 0) {
      if (uVar1 != 0) {
        if ((uVar1 & 1) != 0) {
          (**(code **)puVar6)(param_2[5],0,uVar2,0);
        }
        if (1 < uVar1) {
          if ((uVar1 >> 1 & 1) != 0) {
            (**(code **)puVar6)(param_2[5],1,uVar2,0);
          }
          if (3 < uVar1) {
            if ((uVar1 >> 2 & 1) != 0) {
              (**(code **)puVar6)(param_2[5],2,uVar2,0);
            }
            if (7 < uVar1) {
              uVar10 = 8;
              do {
                if ((uVar10 & uVar1) != 0) {
                  uVar5 = uVar10 - 4 >> 2;
                  if (uVar5 < 8) {
                    uVar8 = *(undefined4 *)(&DAT_03cbf080 + (long)(int)uVar5 * 4);
                  }
                  else {
                    uVar8 = 1;
                  }
                  (**(code **)puVar6)(param_2[5],uVar8,uVar2,0);
                }
                uVar10 = uVar10 * 2;
              } while (uVar10 <= uVar1);
            }
          }
        }
      }
    }
    else {
      uVar7 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar9 + 0x70) + 0x110),lVar9 + 0x30);
      local_44 = 0xffffffff;
      if ((char)puVar3[4] == '\0') {
        local_70 = *(undefined8 *)(*param_2 + 0x62a0);
        uStack_68 = *(undefined8 *)(*param_2 + 0x62a8);
      }
      else {
        local_70 = *(undefined8 *)(puVar3 + 4);
        uStack_68 = *(undefined8 *)(puVar3 + 6);
      }
      local_48 = 0xffffffff;
      FUN_00c60e30(param_2,uVar1,uVar2,uVar7,&local_70,&local_44,&local_48);
    }
  }
  return;
}


