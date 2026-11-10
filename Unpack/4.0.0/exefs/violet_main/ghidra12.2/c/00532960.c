/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00532960; name: FUN_00532960
 */


bool FUN_00532960(uint *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  int local_34;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + (long)param_2);
    puVar7 = param_1;
    puVar2 = param_1;
    if (6 < param_2) {
      puVar2 = (uint *)((long)puVar1 - 7);
    }
joined_r0x005329cc:
    do {
      uVar5 = (ulong)puVar7 & 7;
      if ((puVar7 < puVar1) && (bVar3 = uVar5 != 0, uVar5 = 0, bVar3)) {
        if (-1 < (char)*puVar7) {
          puVar7 = (uint *)((long)puVar7 + 1);
          goto joined_r0x005329cc;
        }
      }
      else if ((puVar7 < puVar2) && (uVar5 == 0)) {
        do {
          if (((puVar7[1] | *puVar7) & 0x80808080) != 0) break;
          puVar7 = puVar7 + 2;
        } while (puVar7 < puVar2);
      }
      puVar6 = puVar7;
      if (puVar7 < puVar1) {
        do {
          puVar6 = puVar7;
          if ((char)*puVar7 < '\0') goto LAB_0053299c;
          puVar7 = (uint *)((long)puVar7 + 1);
        } while (puVar1 != puVar7);
        puVar6 = puVar1;
      }
LAB_0053299c:
      iVar4 = (int)puVar6 - (int)param_1;
      iVar4 = FUN_00532760(&DAT_044c6e98,(long)param_1 + (long)iVar4,param_2 - iVar4,&local_34);
      puVar7 = (uint *)((long)puVar6 + (long)local_34);
    } while (iVar4 == 0xfd);
    iVar4 = (int)(uint *)((long)puVar6 + (long)local_34) - (int)param_1;
  }
  return iVar4 == param_2;
}


