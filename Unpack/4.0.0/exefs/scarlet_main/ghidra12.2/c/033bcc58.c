/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033bcc58; name: FUN_033bcc58
 */


void FUN_033bcc58(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  long lVar8;
  int *piVar9;
  void *__dest;
  long lVar10;
  
  uVar2 = *(uint *)(param_1 + 0x7c);
  if (*(int *)(param_1 + 0x88) - 1U == uVar2) {
    lVar8 = *(long *)(param_1 + 0x98);
    piVar9 = (int *)(param_1 + 0xa4);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x98);
    piVar9 = (int *)(lVar8 + (ulong)(uVar2 + 1) * 4);
  }
  uVar3 = *(uint *)(param_1 + 0x8c);
  lVar10 = *(long *)(param_1 + 0x68);
  uVar2 = *piVar9 - *(int *)(lVar8 + (ulong)uVar2 * 4) & 0xffff;
  uVar1 = uVar3;
  if (*(uint *)(param_1 + 0x70) <= uVar3) {
    uVar1 = *(uint *)(param_1 + 0x70);
  }
  *(uint *)(param_1 + 0x8c) = uVar3 - uVar1;
  __dest = (void *)(*(long *)(lVar10 + 0x18) + (ulong)*(ushort *)(lVar10 + 0x20) * 0x5f0);
  uVar4 = *(undefined1 *)(param_1 + 0x90);
  memcpy(__dest,*(void **)(param_1 + 0xb0),(ulong)uVar2);
  *(uint *)((long)__dest + 0x5e4) = uVar2;
  *(uint *)((long)__dest + 0x5e8) = uVar1;
  *(undefined1 *)((long)__dest + 0x5ec) = uVar4;
  uVar3 = *(uint *)(lVar10 + 0x28);
  uVar1 = *(ushort *)(lVar10 + 0x20) + 1;
  sVar7 = 0;
  if (uVar3 != 0) {
    sVar7 = (short)(uVar1 / uVar3);
  }
  *(short *)(lVar10 + 0x20) = (short)uVar1 - sVar7 * (short)uVar3;
  piVar9 = (int *)(lVar10 + 0x24);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
    if (bVar6) {
      *piVar9 = *piVar9 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((*(short *)(param_1 + 0x54) == 1) || (*(int *)(param_1 + 0x7c) != *(int *)(param_1 + 0x84))) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    *(ulong *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + (ulong)uVar2;
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x80);
    *(ulong *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb8) + (ulong)*(uint *)(param_1 + 0x74);
    *(undefined1 *)(param_1 + 0x90) = 1;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x58) / 400;
  }
  return;
}


