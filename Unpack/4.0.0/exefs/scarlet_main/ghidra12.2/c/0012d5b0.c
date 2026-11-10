/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012d5b0; name: FUN_0012d5b0
 */


void FUN_0012d5b0(long param_1,undefined8 param_2,int *param_3,int param_4,int param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = (long)*param_3 * (long)param_5;
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  param_5 = param_5 * param_4;
  lVar3 = (long)param_5;
  lVar1 = (*(code *)*puVar5)(puVar5[1],param_2,lVar4,lVar3);
  if ((param_5 != 0) && (lVar1 == 0)) {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((*(byte *)(puVar2 + 0xb) & 0xf) != 0) || (*(char *)((long)puVar2 + 0x67) != '\0')) {
      lVar1 = 0;
      goto LAB_0012d61c;
    }
    FUN_0012b690(param_1,1);
    lVar1 = (*(code *)*puVar2)(puVar2[1],param_2,lVar4,lVar3);
    if (lVar1 == 0) goto LAB_0012d61c;
  }
  puVar5[3] = (lVar3 - lVar4) + puVar5[3];
LAB_0012d61c:
  if ((param_5 != 0) && (lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00126bd0(param_1,4);
  }
  *param_3 = param_4;
  return;
}


