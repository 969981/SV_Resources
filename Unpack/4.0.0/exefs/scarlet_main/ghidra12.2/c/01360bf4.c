/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01360bf4; name: FUN_01360bf4
 */


void FUN_01360bf4(long *param_1,uint param_2)

{
  undefined2 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = (**(code **)(*param_1 + 0x78))(param_1,param_1[8]);
  if (param_2 < *(uint *)(param_1 + 0xb)) {
    uVar6 = (ulong)param_2;
    lVar5 = uVar6 * 2 + (ulong)param_2;
    lVar3 = param_1[8];
    *(ulong *)(param_1[0xc] + lVar5 * 8 + 8) = uVar2 & 0xffff | 0x20000;
    lVar4 = param_1[0xc];
    lVar5 = *(long *)(lVar4 + lVar5 * 8);
    if (*(char *)(lVar5 + 0x54) != '\0') {
      uVar1 = FUN_011b8d00(*(undefined8 *)(lVar5 + 0x30),*(undefined8 *)(lVar3 + 0x30),
                           *(undefined2 *)(lVar5 + 0x50));
      *(undefined2 *)(lVar5 + 0x52) = uVar1;
      lVar4 = param_1[0xc];
    }
    *(undefined2 *)(lVar4 + uVar6 * 0x18 + 0x10) = 0;
    lVar5 = param_1[0xc] + uVar6 * 0x18;
    *(ushort *)(lVar5 + 0x12) = *(ushort *)(lVar5 + 0x12) & 0xfffe;
  }
  return;
}


