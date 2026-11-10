/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008882c4; name: FUN_008882c4
 */


void FUN_008882c4(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  if (*(uint *)(param_1 + 0x1ba8) != param_2) {
    nn::fontll::ScalableFontEngine::SetFont(*(char **)(param_1 + 8));
    nn::fontll::ScalableFontEngine::GetError();
    nn::fontll::ScalableFontEngine::SetBoldWeight((int)*(undefined8 *)(param_1 + 8));
    nn::fontll::ScalableFontEngine::GetError();
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 0;
    if (*(char *)(*(long *)(param_1 + 0x1c00) + (ulong)param_2) != '\0') {
      nn::fontll::ScalableFontEngine::SetOutlineWidth((ushort)uVar1);
      uVar1 = *(undefined8 *)(param_1 + 8);
      uVar2 = 2;
    }
    nn::fontll::ScalableFontEngine::SetFlags(uVar1,uVar2);
    nn::fontll::ScalableFontEngine::GetError();
    *(uint *)(param_1 + 0x1ba8) = param_2;
  }
  return;
}


