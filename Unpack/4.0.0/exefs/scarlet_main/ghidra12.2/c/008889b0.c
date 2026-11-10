/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008889b0; name: FUN_008889b0
 */


void FUN_008889b0(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  
  lVar1 = param_1 + (ulong)param_3 * 4;
  if (*(uint *)(lVar1 + 0x1bac) != param_2) {
    lVar3 = (ulong)param_3 * 0xb8;
    nn::fontll::ScalableFontEngine::SetFont((char *)(*(long *)(param_1 + 0x10) + lVar3));
    nn::fontll::ScalableFontEngine::GetError();
    nn::fontll::ScalableFontEngine::SetBoldWeight((int)*(undefined8 *)(param_1 + 0x10) + (int)lVar3)
    ;
    nn::fontll::ScalableFontEngine::GetError();
    lVar3 = *(long *)(param_1 + 0x10) + lVar3;
    uVar2 = 0;
    if (*(char *)(*(long *)(param_1 + 0x1c00) + (ulong)param_2) != '\0') {
      nn::fontll::ScalableFontEngine::SetOutlineWidth((ushort)lVar3);
      lVar3 = *(long *)(param_1 + 0x10) + (ulong)param_3 * 0xb8;
      uVar2 = 2;
    }
    nn::fontll::ScalableFontEngine::SetFlags(lVar3,uVar2);
    nn::fontll::ScalableFontEngine::GetError();
    *(uint *)(lVar1 + 0x1bac) = param_2;
  }
  return;
}


