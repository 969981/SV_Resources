/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03500ec8; name: FUN_03500ec8
 */


void FUN_03500ec8(long param_1)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  
  if ((*(char *)(param_1 + 0xbf) == '\0') && (*(short *)(param_1 + 0xc4) == 0)) {
    uVar2 = (uint)(*(short *)(param_1 + 400) != 0);
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x170) = 0xff;
  FUN_03501938(param_1 + 0x98);
  cVar3 = (char)-uVar2;
  cVar1 = cVar3;
  if (((*(char *)(param_1 + 0xef) == '\0') && (*(short *)(param_1 + 0xf4) == 0)) &&
     (*(short *)(param_1 + 400) == 0)) {
    cVar1 = '\x01';
  }
  *(char *)(param_1 + ((ulong)~-uVar2 & 1) + 0x170) = cVar3;
  FUN_03501938(param_1 + 200);
  cVar3 = cVar1;
  if (((*(char *)(param_1 + 0x11f) == '\0') && (*(short *)(param_1 + 0x124) == 0)) &&
     (cVar3 = '\x02', *(short *)(param_1 + 400) != 0)) {
    cVar3 = cVar1;
  }
  *(char *)(param_1 + 0x170 + (long)cVar1 + 1) = cVar1;
  FUN_03501938(param_1 + 0xf8);
  *(char *)(param_1 + 0x170 + (long)cVar3 + 1) = cVar3;
  FUN_03501938(param_1 + 0x128);
  *(byte *)(param_1 + 0x194) = *(byte *)(param_1 + 0x194) & 0xfc;
  return;
}


