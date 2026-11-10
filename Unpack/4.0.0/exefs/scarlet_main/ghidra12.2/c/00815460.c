/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00815460; name: FUN_00815460
 */


ulong FUN_00815460(long param_1,long param_2,undefined2 param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  if (param_2 == 0) {
    uVar4 = *(ushort *)(param_1 + 0x60);
  }
  else {
    uVar3 = *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50);
    if (1 < uVar3) {
      uVar5 = 0;
      do {
        if (*(long *)(*(long *)(param_1 + 0x860) + (uVar5 & 0xffff) * 0xb0 + 8) == param_2) {
          uVar4 = *(ushort *)(param_1 + 0x60);
          if ((uint)uVar4 != ((uint)uVar5 & 0xffff)) {
            return (ulong)(uint)uVar4;
          }
          goto LAB_008154cc;
        }
        uVar1 = (uint)uVar5 + 1;
        uVar5 = (ulong)uVar1;
      } while ((int)(uVar1 & 0xffff) < (int)(uVar3 - 1));
    }
    uVar4 = *(ushort *)(param_1 + 0x60);
LAB_008154cc:
    if (1 < uVar3) {
      uVar5 = 0;
      do {
        plVar6 = (long *)(*(long *)(param_1 + 0x860) + (uVar5 & 0xffff) * 0xb0 + 8);
        if (*plVar6 == 0) {
          lVar7 = (uVar5 & 0xffff) * 0xb0;
          puVar2 = (undefined1 *)(*(long *)(param_1 + 0x860) + lVar7);
          *puVar2 = 0;
          *plVar6 = 0;
          *(undefined2 *)(puVar2 + 0x10) = 0;
          FUN_0078b160(puVar2 + 0x18);
          FUN_0078b160(puVar2 + 0x38);
          *(undefined4 *)(puVar2 + 0x58) = 0x50004000;
          FUN_00817eec(puVar2 + 0x60,&DAT_03c886bc);
          FUN_00817eec(puVar2 + 0x78,&DAT_03c886bc);
          *(undefined2 *)(puVar2 + 0x90) = 0;
          FUN_007935cc(puVar2 + 0x98);
          FUN_007935cc(puVar2 + 0xa0);
          *(undefined2 *)(puVar2 + 0xa8) = 2;
          lVar7 = *(long *)(param_1 + 0x860) + lVar7;
          *(long *)(lVar7 + 8) = param_2;
          *(undefined2 *)(lVar7 + 0x10) = param_3;
          return uVar5;
        }
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar1;
      } while ((int)(uVar1 & 0xffff) < (int)(uVar3 - 1));
    }
  }
  return (ulong)uVar4;
}


