/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e1f884; name: FUN_02e1f884
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_02e1f884(long *param_1)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  
  if (*(char *)((long)param_1 + 0x714) == '\0') {
    return false;
  }
  bVar3 = (**(code **)(*param_1 + 0x220))(param_1,0x19);
  cVar7 = *(char *)((long)param_1 + 0x40a);
  cVar5 = *(char *)((long)param_1 + 0x40b);
  bVar2 = cVar5 != '\x12';
  uVar4 = (**(code **)(*param_1 + 0x4d0))(param_1,0x17);
  bVar1 = bVar3 & cVar7 == '\x02';
  bVar3 = bVar3 & cVar5 == '\x02';
  cVar6 = cVar5;
  if ((uVar4 & 1) == 0) {
    if (cVar7 == '\x12' || bVar1 != 0) {
      cVar7 = '\0';
      cVar6 = '\0';
      if (bVar2 && bVar3 == 0) {
        cVar7 = cVar5;
        cVar6 = cVar5;
      }
      goto LAB_02e1f914;
    }
joined_r0x02e1f9b4:
    if (bVar2 && bVar3 == 0) goto LAB_02e1f914;
  }
  else {
    if (cVar7 != '\x12' && bVar1 == 0) goto joined_r0x02e1f9b4;
    cVar7 = cVar5;
    if (bVar2 && bVar3 == 0) goto LAB_02e1f914;
    cVar7 = '\x12';
  }
  cVar6 = cVar7;
LAB_02e1f914:
  uVar4 = (ulong)*(byte *)((long)param_1 + 0x715);
  if (uVar4 < 0x13) {
    cVar5 = (&DAT_03d630a1)[uVar4 * 2];
  }
  else {
    cVar5 = '\x12';
  }
  if (cVar5 == cVar7) {
    bVar2 = true;
  }
  else {
    if (*(byte *)((long)param_1 + 0x715) < 0x13) {
      cVar7 = (&DAT_03d630a1)[uVar4 * 2];
    }
    else {
      cVar7 = '\x12';
    }
    bVar2 = cVar7 == cVar6;
  }
  return bVar2;
}


