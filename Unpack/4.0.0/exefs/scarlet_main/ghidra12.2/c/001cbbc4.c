/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cbbc4; name: FUN_001cbbc4
 */


int FUN_001cbbc4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *__s;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStack_b0 [16];
  uint local_a0;
  undefined8 local_80;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(long *)(param_1 + 0x40) = param_1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = FUN_001ed47c(param_2,auStack_b0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 0x1a;
  }
  lVar3 = FUN_001ec328(param_2);
  *(long *)(param_1 + 0x20) = lVar3;
  iVar1 = 0x1b;
  if (lVar3 != 0) {
    iVar1 = iVar2;
  }
  *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
  if ((iVar1 == 0) && ((local_a0 & 0xf000) == 0x8000)) {
    *(undefined8 *)(param_1 + 0x78) = local_80;
    *(code **)(param_1 + 0x30) = FUN_001cc124;
  }
  *(code **)(param_1 + 0x28) = FUN_001cc1a0;
  *(code **)(param_1 + 0x38) = FUN_001cc214;
  *(undefined4 *)(param_1 + 0x18) = 2;
  __s = (char *)FUN_001ec328(param_2);
  if (__s == (char *)0x0) {
    return 0x1b;
  }
  pcVar4 = strrchr(__s,0x2f);
  pcVar5 = strrchr(__s,0x5c);
  if ((pcVar4 == (char *)0x0) || (pcVar5 == (char *)0x0)) {
    if (pcVar4 == (char *)0x0) {
      pcVar4 = __s;
      if (pcVar5 != (char *)0x0) {
        pcVar4 = pcVar5 + 1;
      }
      goto LAB_001cbcf4;
    }
  }
  else if (pcVar4 <= pcVar5) {
    pcVar4 = pcVar5;
  }
  pcVar4 = pcVar4 + 1;
LAB_001cbcf4:
  lVar3 = FUN_001ec328(pcVar4);
  FUN_001ec308(__s);
  if (lVar3 == 0) {
    return 0x1b;
  }
  iVar2 = FUN_001cc004(param_1,lVar3);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  FUN_001ec308(lVar3);
  return iVar1;
}


