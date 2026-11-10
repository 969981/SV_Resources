/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c0de30; name: FUN_00c0de30
 */


bool FUN_00c0de30(uint *param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  int local_44;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + (long)param_2);
    puVar5 = param_1;
joined_r0x00c0de70:
    do {
      uVar4 = (ulong)puVar5 & 7;
      if ((puVar5 < puVar1) && (bVar2 = uVar4 != 0, uVar4 = 0, bVar2)) {
        if (-1 < (char)*puVar5) {
          puVar5 = (uint *)((long)puVar5 + 1);
          goto joined_r0x00c0de70;
        }
      }
      else if ((puVar5 < (uint *)((long)puVar1 - 7U)) && (uVar4 == 0)) {
        do {
          if (((puVar5[1] | *puVar5) & 0x80808080) != 0) break;
          puVar5 = puVar5 + 2;
        } while (puVar5 < (uint *)((long)puVar1 - 7U));
      }
      if (puVar5 < puVar1) {
        do {
          if ((char)*puVar5 < '\0') goto LAB_00c0dedc;
          puVar5 = (uint *)((long)puVar5 + 1);
        } while (puVar1 != puVar5);
        puVar5 = puVar1;
      }
LAB_00c0dedc:
      iVar3 = (int)puVar5 - (int)param_1;
      iVar3 = FUN_00c0dc50(&DAT_0455c4a8,(long)param_1 + (long)iVar3,param_2 - iVar3,&local_44);
      puVar5 = (uint *)((long)puVar5 + (long)local_44);
    } while (iVar3 == 0xfd);
    iVar3 = (int)puVar5 - (int)param_1;
  }
  return iVar3 == param_2;
}


