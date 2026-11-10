/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017488e0; name: FUN_017488e0
 */


void FUN_017488e0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = 0;
  lVar4 = 0x83a8;
  lVar5 = 0x195c;
  do {
    lVar1 = param_1 + lVar3;
    lVar3 = lVar3 + 0x20;
    *(undefined1 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x54) = 0;
    *(undefined8 *)(lVar1 + 0x5c) = 0;
    *(undefined8 *)(lVar1 + 100) = 0;
    *(undefined1 *)(lVar1 + 0x6c) = 0;
    *(undefined1 *)(lVar1 + 0xcd8) = 0;
    *(undefined8 *)(lVar1 + 0xcec) = 0;
    *(undefined1 *)(lVar1 + 0xcf4) = 0;
    *(undefined8 *)(lVar1 + 0xcdc) = 0;
    *(undefined8 *)(lVar1 + 0xce4) = 0;
    *(undefined1 *)(lVar1 + 0x1958) = 0;
    puVar2 = (undefined8 *)(param_1 + lVar5);
    lVar5 = lVar5 + 0x20;
    *(undefined1 *)(puVar2 + 3) = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined4 *)(param_1 + lVar4) = 0xffffffff;
    lVar4 = lVar4 + 4;
  } while (lVar3 != 0xc80);
  return;
}


