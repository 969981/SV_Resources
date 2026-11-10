/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033bdc00; name: FUN_033bdc00
 */


int FUN_033bdc00(long param_1)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong __n;
  uint uVar9;
  
  puVar4 = PTR_DAT_047e2fd0;
  iVar5 = *(int *)(param_1 + 0x68);
  do {
    if (iVar5 == 0) {
      bVar3 = *(byte *)(param_1 + 0x82);
      if ((bVar3 & 1) != 0) {
        return 0x11;
      }
      if ((bVar3 >> 1 & 1) == 0) {
        (**(code **)(**(long **)(param_1 + 0x58) + 0x90))();
      }
      else {
        *(byte *)(param_1 + 0x82) = bVar3 & 0xfd;
      }
      iVar5 = FUN_034fa420(param_1);
      if (iVar5 != 0x2d) {
        return iVar5;
      }
      if (*(int *)(param_1 + 0x6c) == *(int *)(param_1 + 0x78)) {
        *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xa8);
        *(undefined1 *)(param_1 + 0xb8) = 1;
        *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x84) / 400;
      }
    }
    uVar2 = *(uint *)(param_1 + 0xa4);
    piVar1 = (int *)(param_1 + 0xcc);
    if (*(int *)(param_1 + 0xb0) - 1U != uVar2) {
      piVar1 = (int *)(*(long *)(param_1 + 0xc0) + (ulong)(uVar2 + 1) * 4);
    }
    uVar9 = *piVar1 - *(int *)(*(long *)(param_1 + 0xc0) + (ulong)uVar2 * 4);
    uVar7 = *(uint *)(param_1 + 0x68);
    uVar2 = uVar9 & 0xffff;
    if (uVar7 < (uVar9 & 0xffff)) {
      if (*(char *)(param_1 + 0xe4) == '\0') {
        lVar6 = (**(code **)(puVar4 + 0x10))(5,uVar2);
        *(long *)(param_1 + 0xd8) = lVar6;
        if (lVar6 == 0) {
          return 0x34;
        }
        uVar7 = *(uint *)(param_1 + 0x68);
        *(undefined1 *)(param_1 + 0xe4) = 1;
      }
      uVar8 = *(uint *)(param_1 + 0xe0);
      uVar9 = uVar7;
      if (uVar2 - uVar8 <= uVar7) {
        uVar9 = uVar2 - uVar8;
      }
LAB_033bdd40:
      __n = (ulong)uVar9;
      memcpy((void *)(*(long *)(param_1 + 0xd8) + (ulong)uVar8),*(void **)(param_1 + 0x60),__n);
      uVar8 = *(uint *)(param_1 + 0xe0);
      lVar6 = *(long *)(param_1 + 0x60);
      uVar7 = *(uint *)(param_1 + 0x68);
    }
    else {
      uVar8 = *(uint *)(param_1 + 0xe0);
      uVar9 = uVar7;
      if (uVar2 - uVar8 <= uVar7) {
        uVar9 = uVar2 - uVar8;
      }
      if (*(char *)(param_1 + 0xe4) != '\0') goto LAB_033bdd40;
      lVar6 = *(long *)(param_1 + 0x60);
      __n = (ulong)uVar9;
      *(long *)(param_1 + 0xd8) = lVar6;
    }
    *(ulong *)(param_1 + 0x60) = lVar6 + __n;
    iVar5 = uVar7 - uVar9;
    *(uint *)(param_1 + 0xe0) = uVar8 + uVar9;
    *(int *)(param_1 + 0x68) = iVar5;
    *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar9;
    if (uVar8 + uVar9 == uVar2) {
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
      return 0x2d;
    }
  } while( true );
}


