/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00789314; name: FUN_00789314
 */


void FUN_00789314(long param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  
  FUN_007ec490();
  plVar3 = (long *)FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3,*(undefined8 *)(param_2 + 8));
  cVar2 = FUN_007ec4f0(param_1);
  if ((cVar2 != -3) && (lVar5 = FUN_007ec4a8(param_1), lVar5 != *(long *)(lVar4 + 0x30))) {
    if (*param_2 == '\0') {
      *(undefined1 *)(*(long *)(param_1 + 0x78) + (ulong)*(byte *)(lVar4 + 0x28)) = 1;
    }
    else if (*param_2 == '\x01') {
      if (*(int *)(param_1 + 0x68) == 0) {
        bVar1 = *(byte *)(lVar4 + 0x28);
      }
      else {
        bVar1 = *(byte *)(lVar4 + 0x28);
        uVar6 = 0;
        puVar7 = (uint *)(((ulong)(bVar1 >> 3) & 0x1c) + *(long *)(param_1 + 0x60) + 0x10);
        do {
          uVar6 = uVar6 + 1;
          *puVar7 = *puVar7 & ~(1 << (ulong)(bVar1 & 0x1f));
          puVar7 = puVar7 + 6;
        } while (uVar6 < *(uint *)(param_1 + 0x68));
      }
      *(undefined1 *)(*(long *)(param_1 + 0x78) + (ulong)bVar1) = 0;
      return;
    }
  }
  return;
}


