/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e15748; name: FUN_00e15748
 */


void FUN_00e15748(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  
  *param_1 = param_2;
  lVar2 = 0;
  if (param_2 != (int *)0x0) {
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
       (uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar4 == 0)) {
      lVar2 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_2 + uVar4);
      lVar2 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  FUN_00dadbb8(param_1 + 1,lVar2);
  piVar3 = (int *)*param_1;
  if (((piVar3 == (int *)0x0) || (*(ushort *)((long)piVar3 - (long)*piVar3) < 7)) ||
     (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar4 == 0)) {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)((long)piVar3 + uVar4);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00dadbb8(param_1 + 0x16,lVar2);
  piVar3 = (int *)*param_1;
  if (((piVar3 == (int *)0x0) || (*(ushort *)((long)piVar3 - (long)*piVar3) < 9)) ||
     (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar4 == 0)) {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)((long)piVar3 + uVar4);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00dacb38(param_1 + 0x2b,lVar2);
  piVar3 = (int *)*param_1;
  if (((piVar3 == (int *)0x0) || (*(ushort *)((long)piVar3 - (long)*piVar3) < 0xb)) ||
     (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[5], uVar4 == 0)) {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)((long)piVar3 + uVar4);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00dadbb8(param_1 + 0x39,lVar2);
  return;
}


