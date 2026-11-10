/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007de13c; name: FUN_007de13c
 */


ulong * FUN_007de13c(long param_1,char *param_2,undefined8 param_3,char *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  char cVar5;
  long lVar6;
  char cVar7;
  
  lVar6 = *(long *)(param_1 + 0x68);
  lVar1 = param_1 + 0x60;
  puVar4 = (ulong *)(param_2 + 2);
  if (lVar6 == lVar1) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\0';
    puVar3 = puVar4;
    do {
      puVar4 = puVar3;
      if ((*(char *)(lVar6 + 0x31) == '\0') && (*(char *)(lVar6 + 0x30) != '\0')) {
        uVar2 = FUN_007de240(lVar6 + 0x10);
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        cVar5 = cVar5 + '\x01';
        puVar4 = puVar3 + 1;
        *puVar3 = uVar2 >> 0x20 | uVar2 << 0x20;
      }
      lVar6 = *(long *)(lVar6 + 8);
      puVar3 = puVar4;
    } while (lVar6 != lVar1);
    lVar6 = *(long *)(param_1 + 0x68);
  }
  if (lVar6 == lVar1) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\0';
    puVar3 = puVar4;
    do {
      puVar4 = puVar3;
      if ((*(char *)(lVar6 + 0x31) == '\0') && (*(char *)(lVar6 + 0x30) == '\0')) {
        uVar2 = FUN_007de240(lVar6 + 0x10);
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        cVar7 = cVar7 + '\x01';
        puVar4 = puVar3 + 1;
        *puVar3 = uVar2 >> 0x20 | uVar2 << 0x20;
      }
      lVar6 = *(long *)(lVar6 + 8);
      puVar3 = puVar4;
    } while (lVar6 != lVar1);
  }
  *param_2 = cVar5;
  param_2[1] = cVar7;
  if ((param_4 != (char *)0x0) && (*param_4 = cVar7 + cVar5, (char)(cVar7 + cVar5) == '\0')) {
    *(undefined1 *)(param_1 + 0xf8) = 0;
  }
  return puVar4;
}


