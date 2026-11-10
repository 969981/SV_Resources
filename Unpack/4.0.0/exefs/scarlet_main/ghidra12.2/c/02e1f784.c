/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e1f784; name: FUN_02e1f784
 */


bool FUN_02e1f784(long *param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  char cVar6;
  char cVar7;
  
  if (param_2 == '\x12') {
    return false;
  }
  bVar4 = (**(code **)(*param_1 + 0x220))(param_1,0x19);
  cVar7 = *(char *)((long)param_1 + 0x40a);
  cVar2 = *(char *)((long)param_1 + 0x40b);
  bVar3 = cVar2 != '\x12';
  uVar5 = (**(code **)(*param_1 + 0x4d0))(param_1,0x17);
  bVar1 = bVar4 & cVar7 == '\x02';
  bVar4 = bVar4 & cVar2 == '\x02';
  cVar6 = cVar2;
  if ((uVar5 & 1) == 0) {
    if (cVar7 == '\x12' || bVar1 != 0) {
      cVar7 = '\0';
      cVar6 = '\0';
      if (bVar3 && bVar4 == 0) {
        cVar7 = cVar2;
        cVar6 = cVar2;
      }
      goto LAB_02e1f820;
    }
joined_r0x02e1f87c:
    if (bVar3 && bVar4 == 0) goto LAB_02e1f820;
  }
  else {
    if (cVar7 != '\x12' && bVar1 == 0) goto joined_r0x02e1f87c;
    cVar7 = cVar2;
    if (bVar3 && bVar4 == 0) goto LAB_02e1f820;
    cVar7 = '\x12';
  }
  cVar6 = cVar7;
LAB_02e1f820:
  return cVar7 == param_2 || cVar6 == param_2;
}


