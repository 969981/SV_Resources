/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00813944; name: FUN_00813944
 */


void FUN_00813944(long param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_70 [4];
  undefined4 local_60 [8];
  long local_38;
  
  local_70[0] = 0;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_60);
  local_38 = 0;
  FUN_007935cc(&local_38);
  if (*(char *)(param_1 + 0x7c0) == '\x04') {
    lVar7 = local_38 - *(long *)(param_1 + 0x850);
    plVar4 = (long *)FUN_007936d4();
    lVar6 = 0;
    if (*plVar4 != 0) {
      lVar6 = lVar7 / *plVar4;
    }
    if (*(int *)(param_1 + 0x5c) / 5 < lVar6) {
      uVar2 = *(undefined2 *)(param_1 + 0x60);
      FUN_0284e338(local_60);
      FUN_0081649c(param_1,5,local_60,uVar2,0);
      FUN_0284e3d4(local_60);
      *(long *)(param_1 + 0x850) = local_38;
    }
  }
  puVar3 = PTR_DAT_047d0860;
  if (1 < *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50)) {
    uVar5 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x860);
      uVar5 = uVar5 & 0xffff;
      if ((*(long *)(lVar6 + uVar5 * 0xb0 + 8) != 0) && (*(char *)(lVar6 + uVar5 * 0xb0) == '\x04'))
      {
        lVar7 = local_38 - *(long *)(lVar6 + uVar5 * 0xb0 + 0xa0);
        plVar4 = (long *)FUN_007936d4();
        lVar6 = 0;
        if (*plVar4 != 0) {
          lVar6 = lVar7 / *plVar4;
        }
        if (*(int *)(param_1 + 0x5c) / 5 < lVar6) {
          lVar7 = uVar5 * 0xb0;
          lVar6 = *(long *)(param_1 + 0x860) + lVar7;
          FUN_0081649c(param_1,3,lVar6 + 0x18,uVar5,*(undefined2 *)(lVar6 + 0x10));
          lVar6 = *(long *)(param_1 + 0x860) + lVar7;
          FUN_0081649c(param_1,4,lVar6 + 0x38,uVar5,*(undefined2 *)(lVar6 + 0x10));
          *(long *)(*(long *)(param_1 + 0x860) + lVar7 + 0xa0) = local_38;
        }
      }
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar1;
    } while ((int)(uVar1 & 0xffff) < (int)(*(ushort *)(*(long *)puVar3 + 0x50) - 1));
  }
  return;
}


