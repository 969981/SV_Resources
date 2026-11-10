/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d4a60; name: FUN_007d4a60
 */


void FUN_007d4a60(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_58;
  
  puVar3 = PTR_DAT_047d0860;
  if (*(int *)(param_1 + 0xd8) != 0) {
    lVar4 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
    lVar8 = *(long *)(lVar4 + 0x20);
    if (lVar8 != lVar4 + 0x18) {
      uVar9 = **(ulong **)puVar3;
      do {
        lVar10 = *(long *)(lVar8 + 0x10);
        if ((((*(char *)(lVar10 + 0x28) != -3) &&
             (lVar5 = FUN_01f7c4e8(*(undefined8 *)puVar3), *(long *)(lVar5 + 0x98) != lVar10)) &&
            (*(char *)(lVar10 + 0x3a) == '\x02')) &&
           ((iVar2 = *(int *)(param_1 + 0xd8), plVar6 = (long *)FUN_0079365c(),
            (ulong)(*(long *)(lVar10 + 0x88) + *plVar6 * (long)iVar2) < uVar9 ||
            (uVar7 = FUN_007df310(*(undefined1 *)(lVar10 + 0x28)), (uVar7 & 1) != 0)))) {
          if (*(int *)(param_1 + 0x850) == 0) {
            FUN_007935cc(param_1 + 0x858);
          }
          local_58 = 0;
          FUN_007935cc(&local_58);
          *(undefined8 *)(lVar10 + 0x88) = local_58;
          uVar1 = *(uint *)(param_1 + 0x850);
          uVar7 = (ulong)uVar1;
          if ((int)uVar1 < 0x17) {
            if (0 < (int)uVar1) {
              plVar6 = (long *)(param_1 + 0x798);
              do {
                if (*plVar6 == *(long *)(lVar10 + 0x30)) goto LAB_007d4ac8;
                uVar7 = uVar7 - 1;
                plVar6 = plVar6 + 1;
              } while (uVar7 != 0);
            }
            *(long *)(param_1 + (long)(int)uVar1 * 8 + 0x798) = *(long *)(lVar10 + 0x30);
            *(uint *)(param_1 + 0x850) = uVar1 + 1;
          }
        }
LAB_007d4ac8:
        lVar8 = *(long *)(lVar8 + 8);
      } while (lVar8 != lVar4 + 0x18);
    }
  }
  return;
}


