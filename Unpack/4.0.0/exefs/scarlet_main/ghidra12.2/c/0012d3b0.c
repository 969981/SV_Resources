/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012d3b0; name: FUN_0012d3b0
 */


long FUN_0012d3b0(long param_1,long param_2,int param_3,int *param_4,int param_5,int param_6,
                 undefined8 param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  iVar2 = *param_4;
  if (param_3 < iVar2) {
    return param_2;
  }
  iVar1 = param_6;
  if (param_6 < 0) {
    iVar1 = param_6 + 1;
  }
  if (iVar2 < iVar1 >> 1) {
    param_6 = iVar2 * 2;
    if (param_6 < 5) {
      param_6 = 4;
    }
  }
  else if (param_6 <= iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00125b90(param_1,"too many %s (limit is %d)",param_7,param_6);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x18);
  lVar6 = (long)iVar2 * (long)param_5;
  lVar5 = (long)param_6 * (long)param_5;
  lVar3 = (*(code *)*puVar7)(puVar7[1],param_2,lVar6,lVar5);
  if ((lVar5 == 0) || (lVar3 != 0)) {
LAB_0012d43c:
    puVar7[3] = (lVar5 - lVar6) + puVar7[3];
  }
  else {
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    if (((*(byte *)(puVar4 + 0xb) & 0xf) == 0) && (*(char *)((long)puVar4 + 0x67) == '\0')) {
      FUN_0012b690(param_1,1);
      lVar3 = (*(code *)*puVar4)(puVar4[1],param_2,lVar6,lVar5);
      if (lVar3 != 0) goto LAB_0012d43c;
    }
    lVar3 = 0;
  }
  if ((lVar5 != 0) && (lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00126bd0(param_1,4);
  }
  *param_4 = param_6;
  return lVar3;
}


