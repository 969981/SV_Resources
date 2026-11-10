/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c60b48; name: FUN_00c60b48
 */


void FUN_00c60b48(long param_1,long param_2,undefined8 param_3)

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
  undefined8 local_48;
  
  puVar6 = PTR_DAT_047e0cb8;
  puVar4 = *(uint **)(param_1 + 0x118);
  for (puVar3 = *(uint **)(param_1 + 0x110); puVar3 != puVar4; puVar3 = puVar3 + 8) {
    lVar9 = *(long *)(puVar3 + 2);
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    if (lVar9 == 0) {
      if (uVar1 != 0) {
        if ((uVar1 & 1) != 0) {
          (**(code **)puVar6)(*(undefined8 *)(param_2 + 0x28),0,uVar2,0);
        }
        if (1 < uVar1) {
          if ((uVar1 >> 1 & 1) != 0) {
            (**(code **)puVar6)(*(undefined8 *)(param_2 + 0x28),1,uVar2,0);
          }
          if (3 < uVar1) {
            if ((uVar1 >> 2 & 1) != 0) {
              (**(code **)puVar6)(*(undefined8 *)(param_2 + 0x28),2,uVar2,0);
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
                  (**(code **)puVar6)(*(undefined8 *)(param_2 + 0x28),uVar8,uVar2,0);
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
      local_48 = param_3;
      FUN_00c60ca8(param_2,uVar1,uVar2,uVar7,puVar3 + 4,&local_48);
    }
  }
  return;
}


