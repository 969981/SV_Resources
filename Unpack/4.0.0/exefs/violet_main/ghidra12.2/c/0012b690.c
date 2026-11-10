/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0012b690; name: FUN_0012b690
 */


/* WARNING: Removing unreachable block (ram,0x0012b700) */

void FUN_0012b690(long param_1,undefined1 param_2)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(param_1 + 0x18);
  *(undefined1 *)(lVar8 + 0x6b) = param_2;
  if (*(char *)(lVar8 + 0x66) == '\0') {
    *(undefined4 *)PTR_DAT_047cb850 = 1;
    if (*(byte *)(lVar8 + 0x65) < 3) {
      lVar9 = *(long *)(param_1 + 0x18);
      plVar1 = (long *)(lVar9 + 0x70);
      *(undefined1 *)(lVar9 + 0x65) = 3;
      do {
        while (plVar3 = (long *)*plVar1, plVar3 == (long *)0x0) {
          plVar4 = (long *)0x0;
          if (plVar1 != (long *)0x0) goto LAB_0012b768;
        }
        bVar2 = *(byte *)(*(long *)(param_1 + 0x18) + 100);
        if ((*(byte *)((long)plVar3 + 9) & (bVar2 ^ 0x18)) == 0) {
          *(byte *)((long)plVar3 + 9) = *(byte *)((long)plVar3 + 9) & 0xc0 | bVar2 & 0x18;
        }
        else {
          *plVar1 = *plVar3;
          FUN_0012bbc0(param_1);
          plVar3 = plVar1;
        }
        plVar4 = (long *)0x0;
        if (*plVar3 != 0) {
          plVar4 = plVar3;
        }
      } while (plVar4 == plVar1);
LAB_0012b768:
      *(long **)(lVar9 + 0x78) = plVar4;
    }
    lVar9 = *(long *)(param_1 + 0x18);
    if (*(char *)(lVar9 + 0x65) != '\b') {
      do {
        FUN_0012a6f0(param_1);
      } while (*(char *)(lVar9 + 0x65) != '\b');
      lVar9 = *(long *)(param_1 + 0x18);
      if (*(char *)(lVar9 + 0x65) == '\a') goto LAB_0012b7bc;
    }
    do {
      FUN_0012a6f0(param_1);
    } while (*(char *)(lVar9 + 0x65) != '\a');
    lVar9 = *(long *)(param_1 + 0x18);
    while (*(char *)(lVar9 + 0x65) != '\b') {
LAB_0012b7bc:
      FUN_0012a6f0(param_1);
    }
    uVar5 = (ulong)*(byte *)(lVar8 + 0x6c) * 4;
    uVar7 = *(ulong *)(lVar8 + 0x20) / 100;
    uVar6 = 0;
    if (uVar7 != 0) {
      uVar6 = 0x7fffffffffffffff / uVar7;
    }
    lVar9 = uVar7 * uVar5;
    if (uVar6 <= uVar5) {
      lVar9 = 0x7fffffffffffffff;
    }
    uVar6 = (*(long *)(lVar8 + 0x18) + *(long *)(lVar8 + 0x10)) - lVar9;
    FUN_0013aed0(lVar8,uVar6 & (long)uVar6 >> 0x3f);
  }
  else {
    FUN_0012b840(param_1,lVar8);
  }
  *(undefined1 *)(lVar8 + 0x6b) = 0;
  return;
}


