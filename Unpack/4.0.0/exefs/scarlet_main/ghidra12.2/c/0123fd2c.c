/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123fd2c; name: FUN_0123fd2c
 */


void FUN_0123fd2c(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 local_58 [8];
  undefined7 local_50;
  undefined4 uStack_49;
  undefined2 local_44;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x170);
  uVar1 = (ulong)~(uint)*(byte *)(lVar3 + 0x70) & 1;
  *(char *)(lVar3 + 0x70) = (char)uVar1;
  for (plVar4 = *(long **)(lVar3 + 0x38); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    *(undefined4 *)((long)plVar4 + uVar1 * 4 + 0x14) = 0;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x110);
  memcpy((void *)(lVar3 + 0x1d0),(void *)(lVar3 + 0x138),0x98);
  memcpy((void *)(lVar3 + 0x138),(void *)(lVar3 + 0xa0),0x98);
  memcpy((void *)(lVar3 + 0xa0),(void *)(lVar3 + 8),0x98);
  memset((void *)(lVar3 + 8),0,0x98);
  memset((void *)(lVar3 + 0x268),0,0x78);
  *(undefined1 *)(lVar3 + 0x2ea) = 0;
  for (lVar3 = FUN_0123fee0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0xd0));
      lVar3 != 0; lVar3 = FUN_0107ba54(*(undefined8 *)(lVar3 + 8),*(undefined2 *)(lVar3 + 0x14))) {
    if (*(char *)(lVar3 + 0x42) != '\0') {
      *(undefined1 *)(lVar3 + 0x42) = 0;
    }
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (*(int *)(*(long *)(lVar3 + 0x38) + 0xc08) != 0) {
    FUN_012496a0();
    FUN_01255180(*(undefined8 *)(lVar3 + 0x58));
    *(undefined8 *)(lVar3 + 0x78) =
         *(undefined8 *)
          (*(long *)(lVar3 + 0x58) + (ulong)*(uint *)(*(long *)(lVar3 + 0x58) + 0x408) * 0x20 + 8);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x50) + 0x1b) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x58);
  uVar5 = puVar2[5];
  puVar2[4] = uVar5;
  *puVar2 = uVar5;
  puVar2[1] = uVar5;
  puVar2[2] = uVar5;
  puVar2[3] = uVar5;
  FUN_01241160(param_1);
  FUN_012416c0(param_1);
  FUN_0124140c(param_1);
  FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xb5,0);
  FUN_0123fffc(*(undefined8 *)(param_1 + 0x38));
  local_44 = 0;
  local_50 = 0;
  uStack_49 = 0;
  local_58[0] = 0;
  FUN_0131bdb0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1d40),local_58,&local_50);
  return;
}


