/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ebe340; name: FUN_00ebe340
 */


void FUN_00ebe340(long *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 local_6c;
  uint auStack_68 [2];
  
  if ((param_1[1] - *param_1 >> 3) * -0x71c71c71c71c71c7 !=
      ((ulong)(param_2[8] - param_2[7]) >> 2 & 0xffffffff)) {
    FUN_00ca7394(param_1);
  }
  puVar1 = (uint *)param_2[1];
  puVar2 = (uint *)*param_2;
  do {
    if (puVar2 == puVar1) {
      return;
    }
    if (8 < puVar2[1] - 2) {
      uVar8 = 1;
      goto LAB_00ebe400;
    }
    lVar5 = (long)(int)puVar2[2];
    switch(puVar2[1]) {
    case 2:
      puVar6 = (undefined4 *)(&DAT_03caba60 + lVar5 * 4);
      goto LAB_00ebe3fc;
    case 3:
      puVar6 = (undefined4 *)(&DAT_03cabfc0 + lVar5 * 4);
      goto LAB_00ebe3fc;
    case 4:
      puVar7 = &UNK_03cab5f0;
      break;
    case 5:
      puVar7 = &UNK_03caa670;
      break;
    case 6:
      puVar6 = (undefined4 *)(&DAT_03caa680 + lVar5 * 4);
      goto LAB_00ebe3fc;
    case 7:
      puVar7 = &UNK_03cb54c8;
      break;
    case 8:
      puVar7 = &UNK_03cb5638;
      break;
    case 9:
      puVar7 = &UNK_03cb5698;
      break;
    case 10:
      puVar7 = &DAT_03cb5418;
    }
    puVar6 = (undefined4 *)(puVar7 + lVar5 * 4);
LAB_00ebe3fc:
    uVar8 = *puVar6;
LAB_00ebe400:
    uVar3 = FUN_00ebd310(puVar2[3]);
    lVar5 = *param_1 + (ulong)*puVar2 * 0x48;
    local_6c = uVar8;
    auStack_68[0] = uVar3;
    FUN_00c85118(lVar5,&local_6c,auStack_68);
    iVar4 = FUN_00c75660(uVar3);
    *(int *)(lVar5 + 0x40) = *(int *)(lVar5 + 0x40) + iVar4;
    puVar2 = puVar2 + 5;
  } while( true );
}


